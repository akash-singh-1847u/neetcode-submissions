class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> mp;
        for(string c:arr){
            mp[c]++;
        }
        for(string c:arr){
            if(mp[c]==1){
                k--;
                if(k==0){
                    return c;
                }
            }
        }
        return "";
    }
};