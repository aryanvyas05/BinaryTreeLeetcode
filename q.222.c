#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

int countNodes(struct TreeNode* root) {
    if (root == NULL){
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}