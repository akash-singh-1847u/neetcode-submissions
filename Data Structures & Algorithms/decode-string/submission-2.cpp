class Solution {
public:
    string decodeString(string s) {
        stack<string> chr;
        stack<int> num;
        string ch="";
        int n=0;
        for(char c:s){
            if(isdigit(c)){
                n=n*10+(c-'0');
            }
            else if(c=='['){
                num.push(n);
                chr.push(ch);
                n=0;
                ch="";
            }
            else if(c==']'){
                int a=num.top();
                num.pop();
                string t=ch;
                for(int i=1;i<a;i++){
                    ch+=t;
                }
                ch=chr.top()+ch;
                chr.pop();
            }
            else{
                ch+=c;
            }
        }
        return ch;
    }
};