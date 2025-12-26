#include <stdio.h>
int main()
{
    int a[3][3] = {
        {0, 0, 5},
        {0, 0, 0},
        {0, 3, 0}
    };
    int i, j, count = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] != 0)
                count++;
        }
    }
    printf("Non-zero elements = %d\n", count);
    if(count < (3 * 3) / 2)
        printf("It is a Sparse Matrix");
    else
        printf("It is NOT a Sparse Matrix");
    return 0;
}
