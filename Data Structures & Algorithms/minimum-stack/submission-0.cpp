class MinStack {
public:
    stack<int> s;
    int min=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            min=val;
        }
        else{
            if(val<min){
                min=val;
            }
        }
        s.push(val);
    }
    
    void pop() {
        if(s.top()==min){
            min=INT_MAX;
            s.pop();
            stack<int> q=s;
            while(!q.empty()){
                if(min>q.top()){
                    min=q.top();
                }
                q.pop();
            }
        }
        else{
            s.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min;
    }
};
