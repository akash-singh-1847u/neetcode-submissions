class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> minheap;
        set<int> st;
        for(int x:nums){
            minheap.push(x);
            while(minheap.size()>k){
                minheap.pop();
            }
        }
        return minheap.top();
    }
};
