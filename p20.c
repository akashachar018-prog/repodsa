#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct qnode
{
    struct node *data;
    struct qnode *next;
};
struct qnode *front = NULL, *rear = NULL;
void enqueue(struct node *t)
{
    struct qnode *newq = (struct qnode *)malloc(sizeof(struct qnode));
    newq->data = t;
    newq->next = NULL;

    if(front == NULL)
        front = rear = newq;
    else
    {
        rear->next = newq;
        rear = newq;
    }
}
struct node* dequeue()
{
    struct qnode *temp = front;
    struct node *t;
    t = temp->data;
    front = front->next;
    free(temp);
    return t;
}

int main()
{
    struct node *root, *temp, *newnode;

    // Create root
    root = (struct node *)malloc(sizeof(struct node));
    root->data = 10;
    root->left = root->right = NULL;

    enqueue(root);

    // Insert second node
    temp = dequeue();
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 20;
    newnode->left = newnode->right = NULL;
    temp->left = newnode;
    enqueue(newnode);

    // Insert third node
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 30;
    newnode->left = newnode->right = NULL;
    temp->right = newnode;
    enqueue(newnode);

    // Display result
    printf("Root node      : %d\n", root->data);
    printf("Left child     : %d\n", root->left->data);
    printf("Right child    : %d\n", root->right->data);

    return 0;
}
