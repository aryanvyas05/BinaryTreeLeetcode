#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};


struct TreeNode* invertTree(struct TreeNode* root) {
    if (root == NULL){
        return 0;
    }
    struct TreeNode* temp;
    temp = root -> left;
    root -> left = root -> right;
    root -> right = temp;

    invertTree (root -> left);
    invertTree (root -> right);

    return root;   
}