class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        for(int i=0;i<num.size()-3;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                string cur=num.substr(i,3);
                ans=max(ans,cur);
            }
        }
        return ans;
    }
};