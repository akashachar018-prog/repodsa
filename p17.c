#include <stdio.h>
#include <stdlib.h>

// Tree node structure
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int main()
{
    struct node *root, *leftChild, *rightChild;

    // Create root node
    root = (struct node *)malloc(sizeof(struct node));
    root->data = 10;
    root->left = NULL;
    root->right = NULL;

    // Create left child
    leftChild = (struct node *)malloc(sizeof(struct node));
    leftChild->data = 20;
    leftChild->left = NULL;
    leftChild->right = NULL;

    // Create right child
    rightChild = (struct node *)malloc(sizeof(struct node));
    rightChild->data = 30;
    rightChild->left = NULL;
    rightChild->right = NULL;

    // Link children to root
    root->left = leftChild;
    root->right = rightChild;

    // Display tree nodes
    printf("Root node      : %d\n", root->data);
    printf("Left child     : %d\n", root->left->data);
    printf("Right child    : %d\n", root->right->data);

    return 0;
}
