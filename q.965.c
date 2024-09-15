#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

bool isUnivalTree(struct TreeNode* root){
    if (root == NULL){
        return true;
    }

    if (root -> left == NULL || root -> right == NULL){
        return true;
    }

    isUnivalTree(root->left);
    isUnivalTree(root->right);

    return root -> val == root -> left -> val == root -> right -> val;
}