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
    struct node *t = temp->data;
    front = front->next;
    free(temp);
    return t;
}
void BFS(struct node *root)
{
    struct node *temp;
    enqueue(root);
    while(front != NULL)
    {
        temp = dequeue();
        printf("%d ", temp->data);

        if(temp->left != NULL)
            enqueue(temp->left);

        if(temp->right != NULL)
            enqueue(temp->right);
    }
}
int main()
{
    struct node *root, *leftChild, *rightChild;
    root = (struct node *)malloc(sizeof(struct node));
    root->data = 1;
    root->left = root->right = NULL;
    leftChild = (struct node *)malloc(sizeof(struct node));
    leftChild->data = 2;
    leftChild->left = leftChild->right = NULL;
    rightChild = (struct node *)malloc(sizeof(struct node));
    rightChild->data = 3;
    rightChild->left = rightChild->right = NULL;
    root->left = leftChild;
    root->right = rightChild;l
    printf("BFS Traversal: ");
    BFS(root);
    return 0;
}
