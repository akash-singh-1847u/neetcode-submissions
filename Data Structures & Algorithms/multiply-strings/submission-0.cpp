class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0"){
            return "0";
        }
        int m=num1.size();
        int n=num2.size();
        vector<int> res(m+n,0);
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int a=num1[i]-'0';
                int b=num2[j]-'0';
                int mul=a*b;
                int pos1=i+j;
                int pos2=i+j+1;
                int sum=mul+res[pos2];
                res[pos2]=sum%10;
                res[pos1]+=sum/10;
            }
        }
        string ans="";
        for(int c:res){
            if(ans.empty() && c==0){
                continue;
            }
            ans+=(c+'0');
        }
        return ans;
    }
};
