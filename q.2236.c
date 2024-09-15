#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

bool checkTree(struct TreeNode* root) {
    if(root == NULL){
        return true;
    }
    if(root->left == NULL || root -> right == NULL){
        return false;
    }
    return root->val == root->left->val + root->right->val;

}