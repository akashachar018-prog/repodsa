#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void DFS(struct node *root)
{
    if(root == NULL)
        return;

    printf("%d ", root->data);   
    DFS(root->left);             
    DFS(root->right);     
}
int main()
{
    struct node *root, *leftChild, *rightChild;
    root = (struct node *)malloc(sizeof(struct node));
    root->data = 1;
    leftChild = (struct node *)malloc(sizeof(struct node));
    leftChild->data = 2;
    leftChild->left = leftChild->right = NULL;
    rightChild = (struct node *)malloc(sizeof(struct node));
    rightChild->data = 3;
    rightChild->left = rightChild->right = NULL;
    root->left = leftChild;
    root->right = rightChild;
    printf("DFS Traversal: ");
    DFS(root);
    return 0;
}
