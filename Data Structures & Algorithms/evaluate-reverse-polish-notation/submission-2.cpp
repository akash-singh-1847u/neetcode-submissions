class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int r=0;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();
                r=a+b;
                s.push(r);
            }
            else if(tokens[i]=="-"){
                int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();
                r=a-b;
                s.push(r);
            }
            else if(tokens[i]=="*"){
                int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();
                r=a*b;
                s.push(r);
            }
            else if(tokens[i]=="/"){
                int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();
                r=a/b;
                s.push(r);
            }
            else{
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};
