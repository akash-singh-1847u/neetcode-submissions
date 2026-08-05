class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        int dig=0;
        if(digits[digits.size()-1]!=9){
            digits[digits.size()-1]+=1;
            return digits;
        }
        else{
            for(int i=0;i<digits.size();i++){
                dig=dig*10+digits[i];
            }
            dig++;
            string r=to_string(dig);
            for(char c:r){
                res.push_back(c-'0');
            }
        }
        return res;
    }
};
