class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int k=0;
        set<string> st;
        for(int i=0;i<emails.size();i++){
            bool at=false;
            bool plus=false;
            string domain="";
            string local="";
            for(int k=0;k<emails[i].size();k++){
                char ch=emails[i][k];
                if(ch=='@'){
                    at=true;
                    continue;
                }
                if(at){
                    domain+=ch;
                }
                else{
                    if(ch=='.'){
                        continue;
                    }
                    if(ch=='+'){
                        plus=true;
                    }
                    if(!plus && ch!='+'){
                        local+=ch;
                    }
                }
            }
            st.insert(local+'@'+domain);
        }
        return st.size();
    }
};