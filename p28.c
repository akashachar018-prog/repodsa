#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = NULL, *temp, *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 10;
    head = newnode;
    newnode->next = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 20;
    newnode->next = head;
    head->next = newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 30;
    newnode->next = head;
    head->next->next = newnode;
    printf("Circular Linked List: ");
    temp = head;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != head);
    printf("\nDeleted node: %d", head->data);
    temp = head;
    while(temp->next != head)
        temp = temp->next;
    temp->next = head->next;
    free(head);
    head = temp->next;
    printf("\nAfter deletion: ");
    temp = head;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != head);
    return 0;
}
