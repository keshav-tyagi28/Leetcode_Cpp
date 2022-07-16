class TrieNode{
    public:
    char ch;
    TrieNode *links[26];
    bool isterminal;
    
    TrieNode(char chr)
    {
        ch=chr;
        
        for(int i=0;i<26;i++)
            links[i]=NULL;
        
        isterminal=false;
    }
    
 
    
};

class Trie {
public:
    TrieNode *root;
    Trie() {
        root=new TrieNode('\0');
    }
    void insertutil(TrieNode *root,string word)
    {
        if(word.size()==0)
        {
            root->isterminal=true;
            return ;
        }
        
        int index= word[0]-'a';
        TrieNode *child;
        
        if(root->links[index]!=NULL)
            child=root->links[index];
        
        else{
            child=new TrieNode(word[0]);
            root->links[index]=child;
        }
        
        insertutil(child,word.substr(1));
        
    }
    void insert(string word) {
        insertutil(root,word);
    }
    
    bool searchutil(TrieNode *root,string word)
    {
        if(word.size()==0)
            
        {       
            if(root->isterminal==true)
                return true;
            else
                return false;
        }
            
        
        
        int index= word[0]-'a';
        TrieNode *child;
        
        if(root->links[index]!=NULL)
            child=root->links[index];
        
        else
        return false;
        
        
       return searchutil(child,word.substr(1));
        
    }
    
    bool search(string word) {
        return searchutil(root,word);
    }
    
        bool precheck(TrieNode *root,string word)
    {
       
        if(word.size()==0)
            return true;
            
        
        
        int index= word[0]-'a';
        TrieNode *child;
        
        if(root->links[index]!=NULL)
            child=root->links[index];
        
        else
        return false;
        
        
       return precheck(child,word.substr(1));

    }
    bool startsWith(string prefix) {
        return precheck(root,prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */