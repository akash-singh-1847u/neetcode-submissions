class Solution {
public:
    vector<string> res;
    void solve(string& temp, map<char,string>& mp,int idx,string digits){
        if(idx==digits.size()){
            res.push_back(temp);
            return;
        }
        char ch=digits[idx];
        string cur=mp[ch];
        for(int i=0;i<cur.size();i++){
            temp+=cur[i];
            solve(temp,mp,idx+1,digits);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            return {};
        }
        map<char,string> mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        string temp="";
        solve(temp,mp,0,digits);
        return res;
    }
};
