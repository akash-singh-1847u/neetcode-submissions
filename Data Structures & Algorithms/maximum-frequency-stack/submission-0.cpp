class FreqStack {
public:
    map<int,int> fr;
    map<int,stack<int>> group;
    int maxfr=0;
    FreqStack() {
        
    }
    
    void push(int val) {
        fr[val]++;
        maxfr=max(maxfr,fr[val]);
        group[fr[val]].push(val);
    }
    
    int pop() {
        int v=group[maxfr].top();
        group[maxfr].pop();
        fr[v]--;
        if(group[maxfr].empty()){
             maxfr--;
        }
        return v;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */