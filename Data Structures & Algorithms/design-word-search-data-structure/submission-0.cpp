class WordDictionary {
public:
    struct node{
        bool isend;
        node* next[26];
    };
    node* get(){
        node* newnode=new node();
        newnode->isend=false;
        for(int i=0;i<26;i++){
            newnode->next[i]=NULL;
        }
        return newnode;
    }
    node* root;
    WordDictionary() {
        root=get();
    }
    
    void addWord(string word) {
        node* cur=root;
        for(char ch:word){
            int idx=ch-'a';
            if(cur->next[idx]==NULL){
                cur->next[idx]=get();
            }
            cur=cur->next[idx];
        }
        cur->isend=true;
    }

    bool search2(node* root,string word){
        node* cur=root;
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(ch=='.'){
                for(int j=0;j<26;j++){
                    if(cur->next[j]!=NULL){
                        if(search2(cur->next[j],word.substr(i+1))==true){
                            return true;
                        }
                    }
                }
                return false;
            }
            else if(cur->next[ch-'a']==NULL){
                return false;
            }    
            cur=cur->next[ch-'a'];
        }
        return cur->isend;
    }
    bool search(string word) {
        return search2(root,word);
    }
};
