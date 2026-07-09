class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        vector<int> a(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            while(!s.empty() && temperatures[i]>temperatures[s.top()]){
                int ans=s.top();
                s.pop();
                a[ans]=i-ans;
            }
            s.push(i);
        }
        return a;
    }
};
