#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

bool isValidBST(struct TreeNode* root) {
    if (root == NULL){
        return false;
    }

    isValidBST(root-> left);
    isValidBST(root-> left);

    if(root->left-> val <= root->val && root->right-> val >= root->val){
        return true;
    }
}