class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1,0);
        for(int i=1;i<=n;i++){
            int c=0;
            int k=i;
            while(k){
                if(k&1){
                    c++;
                }
                k=k>>1;
            }
            res[i]=c;
        }
        return res;
    }
};
