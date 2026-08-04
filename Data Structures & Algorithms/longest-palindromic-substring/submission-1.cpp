class Solution {
public:
    int mx=INT_MIN;
    string solve(string& s,int i,int j){
        string res;
        int l=i;
        int r=j;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else{
                return "";
            }
        }
        if(mx<j-i+1){
            mx=j-i+1;
            res=s.substr(i,j-i+1);
        }
        return res;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        string ans=s.substr(0,1);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                string tmp=solve(s,i,j);
                if(!tmp.empty()){
                    ans=tmp;
                }            
            }
        }
        return ans;
    }
};
