class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> as(101,0);
        for(int h:heights){
            as[h]++;
        }
        int ans=0;
        int idx=0;
        for(int i=1;i<=100;i++){
            while(as[i]){
                if(heights[idx]!=i){
                    ans++;
                }
                idx++;
                as[i]--;
            }
        }
        return ans;
    }
};