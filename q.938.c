#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

int rangeSumBST(struct TreeNode* root, int low, int high) {
    if (root == NULL){
        return 0;
    }

    int sum = 0;

    int leftSum = rangeSumBST(root-> left, low, high);
    int rightSum = rangeSumBST(root-> right, low, high);

    sum += leftSum + rightSum;

    if(root-> val >= low && root -> val <= high){
        sum += root -> val;
    }
    return sum;

}