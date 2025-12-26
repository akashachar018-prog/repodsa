#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Linked list node
struct node
{
    int data;
    struct node *next;
};

int main()
{
    int arr[1000];
    int i, n = 1000;
    clock_t start, end;
    double time_array, time_list;

    /* ---------------- ARRAY INSERTION ---------------- */
    start = clock();

    for(i = n; i > 0; i--)
        arr[i] = arr[i - 1];   // shifting

    arr[0] = 10;   // insertion at beginning

    end = clock();
    time_array = ((double)(end - start)) / CLOCKS_PER_SEC;

    /* ---------------- LINKED LIST INSERTION ---------------- */
    struct node *head = NULL;
    struct node *newnode;

    start = clock();

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 10;
    newnode->next = head;
    head = newnode;   // insertion at beginning

    end = clock();
    time_list = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Time for array insertion   : %f seconds\n", time_array);
    printf("Time for list insertion    : %f seconds\n", time_list);

    /* ---------------- ARRAY DELETION ---------------- */
    start = clock();

    for(i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];   // shifting

    end = clock();
    time_array = ((double)(end - start)) / CLOCKS_PER_SEC;

    /* ---------------- LINKED LIST DELETION ---------------- */
    start = clock();

    struct node *temp = head;
    head = head->next;
    free(temp);

    end = clock();
    time_list = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Time for array deletion    : %f seconds\n", time_array);
    printf("Time for list deletion     : %f seconds\n", time_list);

    return 0;
}
