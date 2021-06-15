#include<bits/stdc++.h>

using namespace std;

struct node {
    int data;

    node *next;

};

node * new_node (int data) {
    node *node_new = new node ();

    node_new->data = data;

    node_new->next = NULL;

    return node_new;
}

void insert_at_beggining (node ** root, int data) {
    node *insert_node = new_node (data);

    if (*root == NULL) {

        *root = insert_node;

        return;

    }

    insert_node->next = *root;

    *root = insert_node;

}

void insert_at_middle (node * root, int data, int pos) {
    node *insert_node = new_node (data);

    node *curr = root;

    node *next;

    for (int i = 0; i < pos; i++) {
        curr = curr->next;
    }
    insert_node->next=curr->next;
    curr->next=insert_node;
}

void insert_at_end (node * root, int data) {
    node *insert_node = new_node (data);

    node *curr = root;

    while (curr->next != NULL) {

        curr = curr->next;

    }

    curr->next = insert_node;
    insert_node->next=NULL;
}

void delete_at_beggining (node **root) {
    node *curr=*root;
    *root=(*root)->next;
    free(curr);
    
}

void delete_at_middle (node * root, int pos) {
    node *curr = root;
    node *next;
    node *prev;
    for (int i = 0; i < pos; i++) {
        curr = curr->next;
    }
    prev = curr;
    next = curr->next->next;
    free (curr->next);
    curr->next=NULL;
}

void delete_at_end (node * root) {
    node *curr = root;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    
    free(curr->next);
    curr->next=NULL;
    
}

void print_nodes (node * root) {
    node *curr = root;

    while (curr != NULL) {

        cout << curr->data << " ";

        curr=curr->next;

    }

}

int main () {
    node *root = NULL;

    insert_at_beggining (&root, 1);

    insert_at_beggining (&root, 2);

    insert_at_beggining (&root, 3);

    insert_at_beggining (&root, 4);

    insert_at_beggining (&root, 5);

    insert_at_middle (root, 6, 2);

    insert_at_end (root, 7);

    print_nodes (root);
    
    cout<<'\n';

    delete_at_beggining (&root);
    print_nodes (root);
    cout<<'\n';

    delete_at_middle (root, 3);
    print_nodes (root);
    cout<<'\n';

    delete_at_end (root);

    print_nodes (root);

    return 0;

}
