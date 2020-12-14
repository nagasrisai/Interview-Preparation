#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* create_node(int data) {
    node* new_node=new node();
    new_node->data=data;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}

node* insert(node* root, int data){
    if(root==NULL) {
        return create_node(data);
    }
    if(data<=root->data) {
        root->left=insert(root->left, data);
    }
    else {
        root->right=insert(root->right,data);
    }
    return root;

}

void inorder(node* root) {
    if(root==NULL) {

        return;
    }
    inorder(root->left);

    cout<<root->data<<" ";
    inorder(root->right);

}

int main() {
    node* root=NULL;

    root=insert(root,15);

    insert(root,10);

    insert(root,6);

    insert(root,7);

    insert(root,13);

    insert(root,18);

    insert(root, 20);

    inorder(root);

    return 0;
}
