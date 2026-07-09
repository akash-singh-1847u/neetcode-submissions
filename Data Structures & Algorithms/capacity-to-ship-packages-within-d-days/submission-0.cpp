class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int s=0;
        for(int c:weights){
            s+=c;
        }
        int r=s;
        while(l<=r){
            int mid=(l+r)/2;
            int ship=1;
            int cp=0;
            for(int c:weights){
                if(cp+c>mid){
                    ship++;
                    cp=0;
                }
                cp+=c;
            }
            if(ship<=days){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};