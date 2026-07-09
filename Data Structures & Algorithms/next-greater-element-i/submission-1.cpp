class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
        stack<int> st;
        for(int c:nums2){
            while(!st.empty() && c>st.top()){
                mp[st.top()]=c;
                st.pop();
            }
            st.push(c);
        }
        while(!st.empty()){
            mp[st.top()]=-1;
            st.pop();
        }
        vector<int> as; 
        for(int c:nums1){
            as.push_back(mp[c]);
        }
        return as;
    }
};