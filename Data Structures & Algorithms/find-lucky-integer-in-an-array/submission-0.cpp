class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int a=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==arr[i]){
                a=max(a,arr[i]);
            }
        }
        if(a>=0){
            return a;
        }
        else{
            return -1;
        }
    }
};