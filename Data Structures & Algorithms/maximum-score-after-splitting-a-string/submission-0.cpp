class Solution {
public:
    int maxScore(string s) {
        int mx=0;
        int one=0;
        for(char c:s){
            if(c=='1'){
                one++;
            }
        }
        int zero=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                zero++;
            }
            else{
                one--;
            }
            mx=max(mx,zero+one);
        }
        return mx;
    }
};