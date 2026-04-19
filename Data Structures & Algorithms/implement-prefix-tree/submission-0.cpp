 struct Trie{
        Trie* ch[256];
        bool flag = false;

        Trie()
        {
            flag = false;
            for(int i = 0;i<256;i++)
            {
                ch[i] = NULL;
            }
        }

        Trie* getChar(char c)
        {
            return ch[c-'a'];
        }

        void setChar(char c,Trie* node)
        {
            ch[c-'a'] = node;
        }

        bool getFlag()
        {
            return flag;
        }

        void setFlag()
        {
            flag = true;
        }

    };
class PrefixTree {
public:
    Trie* root;

    
    PrefixTree() {
        root = new Trie();
    }
    
    void insert(string word) {
        Trie* temp = root;
        for(int i = 0;i<word.size();i++)
        {
            if(temp->getChar(word[i])==NULL)
            {
                temp->setChar(word[i],new Trie());
            }
            temp = temp->getChar(word[i]);
        }
        temp->setFlag();
    }
    
    bool search(string word) {
        Trie* temp = root;
        for(int i = 0;i<word.size();i++)
        {
            if(temp->getChar(word[i])==NULL)
            {
                return false;
            }
            temp = temp->getChar(word[i]);
        }
        return temp->getFlag();
    }
    
    bool startsWith(string word) {
         Trie* temp = root;
        for(int i = 0;i<word.size();i++)
        {
            if(temp->getChar(word[i])==NULL)
            {
                return false;
            }
            temp = temp->getChar(word[i]);
        }
        return true;
    }
};
