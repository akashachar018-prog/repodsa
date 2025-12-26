#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct queue
{
    struct node *data;
    struct queue *next;
};
struct queue *front = NULL, *rear = NULL;
void enqueue(struct node *temp)
{
    struct queue *newq = (struct queue *)malloc(sizeof(struct queue));
    newq->data = temp;
    newq->next = NULL;

    if(rear == NULL)
        front = rear = newq;
    else
    {
        rear->next = newq;
        rear = newq;
    }
}

// Dequeue function
struct node* dequeue()
{
    struct queue *temp = front;
    struct node *t;

    if(front == NULL)
        return NULL;

    t = temp->data;
    front = front->next;
    free(temp);
    return t;
}

int main()
{
    struct node *root, *leftChild, *rightChild;
    struct node *temp;

    // Create root
    root = (struct node *)malloc(sizeof(struct node));
    root->data = 1;
    root->left = root->right = NULL;

    enqueue(root);

    // Create left child
    temp = dequeue();
    leftChild = (struct node *)malloc(sizeof(struct node));
    leftChild->data = 2;
    leftChild->left = leftChild->right = NULL;
    temp->left = leftChild;
    enqueue(leftChild);

    // Create right child
    rightChild = (struct node *)malloc(sizeof(struct node));
    rightChild->data = 3;
    rightChild->left = rightChild->right = NULL;
    temp->right = rightChild;
    enqueue(rightChild);

    // Display tree
    printf("Root node  : %d\n", root->data);
    printf("Left child : %d\n", root->left->data);
    printf("Right child: %d\n", root->right->data);

    return 0;
}
