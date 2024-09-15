#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

bool isSame(struct Node* p, struct Node* q){
    if(p == NULL && q == NULL){
        return true;
    }
    if( p==NULL || q == NULL){
        return false;
    }

    return isSame(p -> data,q -> data) &&
    isSame(p->left,q -> left) &&
    isSame(p->right,q -> right);
}
    
int main(){
    struct Node* root1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* root2 = (struct Node*)malloc(sizeof(struct Node));

    root1-> data = 1;
    root2-> left;     
}