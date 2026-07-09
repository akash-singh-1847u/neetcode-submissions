class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        if(words.size()!=pattern.size()){
            return false;
        }
        map<char,string> mp1;
        map<string,char> mp2;
        for(int i=0;i<pattern.size();i++){
            char a=pattern[i];
            string w=words[i];
            if(mp1.count(a) && mp1[a]!=w){
                return false;
            }
            if(mp2.count(w) && mp2[w]!=a){
                return false;
            }
            mp1[a]=w;
            mp2[w]=a;    
        }
        return true;
    }
};