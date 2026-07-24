class PrefixTree {
public:
    struct node{
        bool isend;
        node* next[26];
    };
    node* getnode(){
        node* newnode=new node();
        newnode->isend=false;
        for(int i=0;i<26;i++){
            newnode->next[i]=NULL;
        }
        return newnode;
    }
    node* root;
    PrefixTree() {
        root=getnode();   
    }
    void insert(string word) {
        node* craw=root;
        for(char ch:word){
            int idx=ch-'a';
            if(craw->next[idx]==NULL){
                craw->next[idx]=getnode();
            }
            craw=craw->next[idx];
        }
        craw->isend=true;
    }
    
    bool search(string word) {
        node* craw=root;
        for(char ch:word){
            int idx=ch-'a';
            if(craw->next[idx]==NULL){
                return false;
            }
            craw=craw->next[idx];
        }
        return craw->isend;
    }
    
    bool startsWith(string prefix) {
        node* craw=root;
        int k=0;
        for(char ch:prefix){
            int idx=ch-'a';
            if(craw->next[idx]==NULL){
                return false;
            }
            k++;
            craw=craw->next[idx];
        }
        return k==prefix.size();
    }
};
