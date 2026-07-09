class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        while(l<=r){
            int mid=(l+r)/2;
            long hr=0;
            for(int c:piles){
                hr+=(c+mid-1)/mid;
            }
            if(hr<=h){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};
