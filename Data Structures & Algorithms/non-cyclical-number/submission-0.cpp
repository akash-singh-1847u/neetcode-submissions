class Solution {
public:
    bool isHappy(int n) {
        set<int> st;
        while(n!=1){
            if(st.find(n)!=st.end()){
                return false;
            }
            st.insert(n);
            int s=0;
            while(n){
                int r=n%10;
                s+=r*r;
                n/=10;
            }
            n=s;
        }
        return true;
    }
};
