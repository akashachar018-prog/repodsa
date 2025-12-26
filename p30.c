#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *n1, *n2, *n3, *temp;

    n1 = (struct node*)malloc(sizeof(struct node));
    n2 = (struct node*)malloc(sizeof(struct node));
    n3 = (struct node*)malloc(sizeof(struct node));

    n1->data = 10; n2->data = 20; n3->data = 30;
    n1->next = n2; n2->next = n3; n3->next = NULL;
    head = n1;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 15;
    temp->next = n1->next;
    n1->next = temp;
    printf("After insertion: ");
    for(temp = head; temp != NULL; temp = temp->next)
        printf("%d ", temp->data);
    temp = n1->next;
    n1->next = temp->next;
    free(temp);
    printf("\nAfter deletion: ");
    for(temp = head; temp != NULL; temp = temp->next)
        printf("%d ", temp->data);
    return 0;
}
