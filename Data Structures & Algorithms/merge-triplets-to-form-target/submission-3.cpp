class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int n=triplets.size();
        vector<int> res(3,0);        
        for(auto a:triplets){
            if(a[0]>target[0] || a[1]>target[1] || a[2]>target[2]){
                continue;
            }
            res[0]=max(res[0],a[0]);
            res[1]=max(res[1],a[1]);
            res[2]=max(res[2],a[2]);
        }
        return res==target;
    }
};
