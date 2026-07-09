class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        stringstream ss(path);
        string word;
        while(getline(ss,word,'/')){
            if(word=="" || word=="."){
                continue;
            }
            else if(word==".."){
                if(!st.empty()){
                    st.pop_back();
                }
            }
            else{
                st.push_back(word);
            }
        }
        string ans="";
        for(string a:st){
            ans+="/"+a;
        }
        if(ans.empty()){
            return "/";
        }
        return ans;
    }
};