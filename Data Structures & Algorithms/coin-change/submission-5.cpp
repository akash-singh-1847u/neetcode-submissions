class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0){
            return 0;
        }
        int c=0;
        queue<int> qu;
        qu.push(0);
        vector<bool> res(amount+1,false);
        res[0]=true;
        while(!qu.empty()){
            int size=qu.size();
            c++;
            for(int i=0;i<size;i++){
                int cur=qu.front();
                qu.pop();
                for(int cr:coins){
                    int s=cr+cur;
                    if(s==amount){
                        return c;
                    }
                    if(s>amount || res[s]){
                        continue;
                    }
                    res[s]=true;
                    qu.push(s);
                }
            }
        }
        return -1;
    }
};
