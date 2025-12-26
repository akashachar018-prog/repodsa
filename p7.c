#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node n1, n2;
    n1.data = 10;
    n2.data = 20;
    n1.next = &n2;
    n2.next = NULL;
    printf("First node data: %d\n", n1.data);
    printf("Second node data: %d\n", n1.next->data);
    return 0;
}
