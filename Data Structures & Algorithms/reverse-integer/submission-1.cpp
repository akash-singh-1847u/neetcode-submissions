class Solution {
public:
    int reverse(int x) {
        int ans=0;
        int X=x;
        while(abs(X)){
            if(ans>INT_MAX/10){
                return 0;
            }
            ans=ans*10+(abs(X)%10);
            X/=10;
        }
        if(x<0){
            return -ans;
        } 
        else{
            return ans;
        }
    }
};
