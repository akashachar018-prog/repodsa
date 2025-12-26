#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
int main()
{
    struct node *root, *l, *r;
    struct node *q[10];
    int front = 0, rear = 0;
    root = (struct node *)malloc(sizeof(struct node));
    root->data = 1;
    l = (struct node *)malloc(sizeof(struct node));
    l->data = 2;
    l->left = l->right = NULL;
    r = (struct node *)malloc(sizeof(struct node));
    r->data = 3;
    r->left = r->right = NULL;
    root->left = l;
    root->right = r;
    q[rear++] = root;
    printf("Level Order: ");
    while(front < rear)
    {
        struct node *t = q[front++];
        printf("%d ", t->data);

        if(t->left)  q[rear++] = t->left;
        if(t->right) q[rear++] = t->right;
    }

    return 0;
}
