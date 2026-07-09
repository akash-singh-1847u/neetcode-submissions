class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(string c:strs){
            res+=to_string(c.size())+"#"+c;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> a;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int l=stoi(s.substr(i,j-i));
            j++;
            a.push_back(s.substr(j,l));
            i=j+l;
        }
        return a;
    }
};
