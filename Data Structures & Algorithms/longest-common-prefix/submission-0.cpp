class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ch="";
        string first=strs[0];
        string last=strs[strs.size()-1];
        int i=0;
        while(i<first.size() && i<last.size() && first[i]==last[i]){
            ch+=first[i];
            i++;
        }
        return ch;
    }
};