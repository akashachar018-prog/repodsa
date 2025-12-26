#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
int main()
{
    struct node *root, *leftChild, *rightChild;
    root = (struct node *)malloc(sizeof(struct node));
    root->data = 10;
    leftChild = (struct node *)malloc(sizeof(struct node));
    leftChild->data = 20;
    leftChild->left = leftChild->right = NULL;
    rightChild = (struct node *)malloc(sizeof(struct node));
    rightChild->data = 30;
    rightChild->left = rightChild->right = NULL;
    root->left = leftChild;
    root->right = rightChild;
    printf("Before deletion:\n");
    printf("Root : %d\n", root->data);
    printf("Left : %d\n", root->left->data);
    printf("Right: %d\n", root->right->data);
    free(root->right);
    root->right = NULL;
    printf("\nAfter deletion:\n");
    printf("Root : %d\n", root->data);
    printf("Left : %d\n", root->left->data);
    return 0;
}
