class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int i=0;
        while(i<min(s1.size(),s2.size())){
            if(s1[i]!=s2[i]){
                return false;
            }
            i++;
        }
        return true;
    }
};
