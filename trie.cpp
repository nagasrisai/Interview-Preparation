#include<bits/stdc++.h>

using namespace  std;

struct trie{
    trie* children[26];
    bool endword;
};

struct trie* getnode(void) {
    trie* new_node= new trie();
    new_node->endword=false;
    for(int i=0; i<26; i++) {
        new_node->children[i]=NULL;
    }
    return new_node;
}

void insert(trie* root, string str) {
    trie* node=root;
    for(int i=0; i<str.length(); i++) {
        int k=str[i]-'a';
        if(!node->children[k]) {
            node->children[k]=getnode();
        }
        node=node->children[k];
    }
    node->endword=true;

}

bool search(trie* root, string str) {
    trie* node =root;
    for(int i=0; i<str.length(); i++) {
        int k=str[i]-'a';
        if(!node->children[k]) {
            return false;
        }
        node=node->children[k];
    }
    return(node!=NULL && node->endword);
}

int main(){
    string keys[] = {"the", "a", "there",
                     "answer", "any", "by",
                     "bye", "their" };
    int n = sizeof(keys)/sizeof(keys[0]);

    struct trie *root = getnode();

    // Construct trie
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);

    // Search for different keys
    search(root, "the")? cout << "Yes\n" :
    cout << "No\n";
    search(root, "these")? cout << "Yes\n" :
    cout << "No\n";
    return 0;

}
