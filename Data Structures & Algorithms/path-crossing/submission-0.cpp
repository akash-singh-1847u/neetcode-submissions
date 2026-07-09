class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0;
        int y=0;
        set<string> mv;
        mv.insert("0,0");
        for(char c:path){
            if(c=='N'){
                y++;
            }
            else if(c=='S'){
                y--;
            }
            else if(c=='E'){
                x++;
            }
            else{
                x--;
            }
            string pos=to_string(x)+","+to_string(y);
            if(mv.count(pos)){
                return true;
                break;
            }
            mv.insert(pos);
        }
        return false;
    }
};