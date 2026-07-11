class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for(int c:asteroids){
            bool des=false;
            while(!s.empty() && s.top()>0 && c<0){
                if(abs(c)>s.top()){
                    s.pop();
                }
                else if(abs(c)==s.top()){
                    s.pop();
                }
                des=true;
                break;
            }
            if(!des){
                s.push(c);
            }
        }
        vector<int> res(s.size());
        for(int i=res.size()-1;i>=0;i--){
            res[i]=s.top();
            s.pop();
        }
        return res;
    }
};