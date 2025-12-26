#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *m, *c, i;
    m = (int *)malloc(5 * sizeof(int));
    c = (int *)calloc(5, sizeof(int));
    printf("Values using malloc:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", m[i]);
    printf("\n\nValues using calloc:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", c[i]);
    return 0;
}
