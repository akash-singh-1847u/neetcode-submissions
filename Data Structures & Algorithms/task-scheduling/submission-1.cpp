class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> fr(26,0);
        for(char c:tasks){
            fr[c-'A']++;
        }
        priority_queue<int> maxheap;
        int time=0;
        for(int c:fr){
            if(c>0)
            maxheap.push(c);
        }
        while(!maxheap.empty()){
            vector<int> temp;
            for(int i=1;i<=n+1;i++){
                if(!maxheap.empty()){
                    int freq=maxheap.top();
                    maxheap.pop();
                    freq--;
                    temp.push_back(freq);
                }
            }
            for(int g:temp){
                if(g>0){
                    maxheap.push(g);
                }
            }
            if(maxheap.empty()){
                time+=temp.size();
            }
            else{
                time+=n+1;
            }
        }
        return time;
    }
};
