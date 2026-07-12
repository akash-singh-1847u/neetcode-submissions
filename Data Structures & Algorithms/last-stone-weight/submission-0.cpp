class Solution {
public:
    priority_queue<int> maxheap;
    int lastStoneWeight(vector<int>& stones) {
        for(int x:stones){
            maxheap.push(x);
        }
        while(maxheap.size()>1){
            int y=maxheap.top();
            maxheap.pop();
            int x=maxheap.top();
            maxheap.pop();
            maxheap.push(y-x);
        }
        return maxheap.top();
    }
};
