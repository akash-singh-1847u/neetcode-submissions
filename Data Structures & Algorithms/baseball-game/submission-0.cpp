class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(auto c:operations){
            if(c=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }
            else if(c=="C"){
                st.pop();
            }
            else if(c=="D"){
                int p;
                p=2*st.top();
                st.push(p);
            }
            else{st.push(stoi(c));}
        }
        int s=0;
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        return s;
    }
};