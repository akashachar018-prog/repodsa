#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
void inorder(struct node *r)
{
    if(r)
    {
        inorder(r->left);
        printf("%d ", r->data);
        inorder(r->right);
    }
}
void preorder(struct node *r)
{
    if(r)
    {
        printf("%d ", r->data);
        preorder(r->left);
        preorder(r->right);
    }
}
void postorder(struct node *r)
{
    if(r)
    {
        postorder(r->left);
        postorder(r->right);
        printf("%d ", r->data);
    }
}

int main()
{
    struct node *root, *l, *r;

    root = (struct node*)malloc(sizeof(struct node));
    l = (struct node*)malloc(sizeof(struct node));
    r = (struct node*)malloc(sizeof(struct node));

    root->data = 1;
    l->data = 2;
    r->data = 3;

    root->left = l;
    root->right = r;
    l->left = l->right = NULL;
    r->left = r->right = NULL;

    printf("Inorder: ");
    inorder(root);

    printf("\nPreorder: ");
    preorder(root);

    printf("\nPostorder: ");
    postorder(root);

    return 0;
}
