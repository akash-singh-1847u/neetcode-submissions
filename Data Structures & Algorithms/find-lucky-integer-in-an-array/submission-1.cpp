class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> fr(501,0);
        for(int i=0;i<arr.size();i++){
            fr[arr[i]]++;
        }
        for(int i=500;i>=1;i--){
            if(fr[i]==i){
                return i;
            }
        }
        return -1;
    }
};