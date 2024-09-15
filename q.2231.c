#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct Treenode {
    int data;
    struct Treenode* left;
    struct Treenode* right;
};

bool edatauateTree(struct Treenode* root){
    if(root -> data == 0){
        return false;
    }
    if (root -> data == 1){
        return true;
    }

    bool leftEdata =  edatauateTree(root-> left);
    bool rightEdata = edatauateTree(root->right);

    if (root-> data == 2){
        return leftEdata || rightEdata;
    }

    if (root-> data == 3){
        return leftEdata && rightEdata;
    }

    return false;
    
}