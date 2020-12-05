#include<bits/stdc++.h>

using namespace  std;

struct node{
    int data;
    node* next;
    node* prev;


};

node* Create_node(int data) {
    node* new_node = new node();

    new_node->next=NULL;

    new_node->data=data;

    new_node->prev=NULL;

    return new_node;
}

node* insert_at_beginning(node** root, int data) {
    node* new_node=Create_node(data);

    if(*root==NULL) {
        *root=new_node;
        return *root;
    }
    else {
        new_node->next=*root;

        *root=new_node;
        return *root;
    }
}

void insert_at_end(node** root, int data) {
    node* new_node=Create_node(data);
    node* temp=*root;
    if(*root==NULL) {
        *root=NULL;
        return;
    }
    else {
        while(temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->prev=temp;
    }
}

void insert_at_middle(node** root, int data, int position) {
    node* new_node=Create_node(data);

    node* temp=*root;

    for(int i=0; i<position-1; i++) {

        temp=temp->next;
    }

    node* next=temp->next;
    temp->next=new_node;
    new_node->prev=temp;
    new_node->next=next;

}

void delete_at_beggining(node** root) {
    node* temp=*root;

    *root=(*root)->next;
    (*root)->prev=NULL;

    free(temp);
}

void delete_at_middle (node** root, int position) {
    node* temp=*root;
    node*prev,*next;

    for(int i=0; i<=position-1; i++) {
        temp=temp->next;
    }
    prev=temp->prev;
    next=temp->next;
    next->prev=prev;
    prev->next=next;

    free(temp);
}

void delete_at_end (node** root) {
    node* temp=*root;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->prev=NULL;
    free(temp);
}

void print(node* root) {
    node* temp=root;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";

}

void reverse_print(node** root) {
    struct node* tail = *root;

    // Traversing till tail of the linked list
    while (tail->next != NULL) {
        tail = tail->next;
    }

    // Traversing linked list from tail
    // and printing the node->data
    while (tail != *root) {
        cout << tail->data << " ";
        tail = tail->prev;
    }
    cout << tail->data << endl;

}

int main() {
    node* root=NULL;

    root=insert_at_beginning(&root, 1);

    root=insert_at_beginning(&root, 2);

    root=insert_at_beginning(&root, 3);

    root=insert_at_beginning(&root, 4);

    root=insert_at_beginning(&root, 5);

    insert_at_end(&root,10);

    insert_at_middle(&root,50,3);

    delete_at_beggining(&root);

    delete_at_middle(&root,3);

    delete_at_end(&root);

    print(root);

    reverse_print(&root);

}
