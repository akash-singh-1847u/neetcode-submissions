class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0;
        int el1=INT_MIN;
        int c2=0;
        int el2=INT_MIN;
        vector<int> a;
        for(int n:nums){
            if(n==el1){
                c1++;
            }
            else if(n==el2){
                c2++;
            }
            else if(c1==0){
                c1=1;
                el1=n;
            }
            else if(c2==0){
                c2=1;
                el2=n;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=c2=0;
        for(int n:nums){
            if(n==el1){c1++;}
            else if(n==el2){
                c2++;
            }
        }
        if(c1>nums.size()/3){a.push_back(el1);}
        if(c2>nums.size()/3){a.push_back(el2);}
        return a;
    }
};