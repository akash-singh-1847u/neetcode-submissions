class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        int k=0;
        string a;
        while(i<size(word1) && j<size(word2)){
            a.push_back(word1[i++]);
            a.push_back(word2[j++]);
        }
        while(j<size(word2)){
            a.push_back(word2[j++]);
        }
        while(i<size(word1)){
            a.push_back(word1[i++]);
        }
        return a;
    }
};