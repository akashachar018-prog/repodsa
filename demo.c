#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, r, c;
    int **arr;

    // Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    // Allocate memory for rows
    arr = (int **)malloc(r * sizeof(int *));

    // Allocate memory for columns
    for(i = 0; i < r; i++)
    {
        arr[i] = (int *)malloc(c * sizeof(int));
    }

    // Reading elements
    printf("Enter elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Printing elements
    printf("2D Array elements are:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
