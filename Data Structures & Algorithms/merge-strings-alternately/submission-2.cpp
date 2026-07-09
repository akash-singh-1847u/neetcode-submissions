class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string a;
       for(int i=0;i<size(word1) || i<size(word2);i++){
            if(i<size(word1)){
                a.push_back(word1[i]);
            }
            if(i<size(word2)){
                a.push_back(word2[i]);
            }
       }
       return a;
    }
};