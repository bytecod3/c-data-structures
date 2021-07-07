#include <stdio.h>

typedef struct tree_node{
    int data;
    struct tree_node* left;
    struct tree_node* right;
} tree_node;


tree_node* init_tree_node(int value){
    // create a new treenode
    tree_node* node = malloc(sizeof(tree_node));
    
    if (node != NULL){
        node->left = NULL;
        node->right = NULL;
        node->data = value; // store value passed to node data address
    }
    
    return node;
}

int main(){

}