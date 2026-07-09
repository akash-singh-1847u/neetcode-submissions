class Solution {
public:
    int maxDifference(string s) {
        map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int odd=0;
        int even=INT_MAX;
        for(char c:s){
            int f=mp[c];
            if(f%2!=0){
                odd=max(odd,f);
            }
            else{
                even=min(even,f);
            }
        }
        return odd-even;
    }
};