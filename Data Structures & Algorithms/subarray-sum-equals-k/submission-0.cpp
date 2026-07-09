class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0;
        map<int,int> a;
        int s=0;
        a[0]=1;
        for(int x:nums){
           s+=x;
           if(a.find(s-k )!=a.end()){
            c+=a[s-k ];
           }
           a[s]++;
        }
        return c;
    }
};