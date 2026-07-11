class Solution {
public:
    int appendCharacters(string s, string t) {
        int m=s.length();
        int n=t.length();
        int k=0;
        int j=0;
        for(int i=0;i<m && i<n;i++){
            if(s[i]==t[k]){
                k++;
            }
        }
        return n-k;
    }
};