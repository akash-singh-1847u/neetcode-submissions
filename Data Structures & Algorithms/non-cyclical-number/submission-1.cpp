class Solution {
public:
    int next(int n){
        int s=0;
        while(n){
            s+=(n%10)*(n%10);
            n/=10;
        }
        return s;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=next(n);
        while(fast!=1 && slow!=fast){
            slow=next(slow);
            fast=next(next(fast));
        }
        return fast==1;
    }
};
