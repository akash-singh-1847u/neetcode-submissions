class Solution {
public:
    int mx=INT_MIN;
    int start=-1;
    int len=-1;
    void solve(string& s,int i,int j){
        int l=i;
        int r=j;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        if(mx<r-1-(l+1)+1){
            len=r-1-(l+1)+1;
            start=l+1;
            mx=r-1-(l+1)+1;
        }
        return;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            solve(s,i,i);
            solve(s,i,i+1);
        }
        return s.substr(start,len);
    }
};
