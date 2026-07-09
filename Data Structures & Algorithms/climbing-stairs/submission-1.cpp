class Solution {
public:
    int climbStairs(int n) {
        if(n<3){
            return n;
        }
        int double_step=1;
        int single_step=2;
        for(int i=3;i<=n;i++){
            int cur=double_step+single_step;
            double_step=single_step;
            single_step=cur;
        }
        return single_step;
    }
};
