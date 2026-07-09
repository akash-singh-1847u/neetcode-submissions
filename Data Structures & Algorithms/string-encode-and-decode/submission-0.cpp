class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(auto &c:strs){
            s+=to_string(c.size())+"#"+c;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> a;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){j++;}
            int l=stoi(s.substr(i,j-i));
            j++;
            a.push_back(s.substr(j,l));
            i=j+l;
        }
        return a;
    }
};
