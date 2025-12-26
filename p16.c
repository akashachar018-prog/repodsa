#include <stdio.h>

struct poly
{
    int coeff;
    int exp;
};

int main()
{
    struct poly p[3];

    // Assigning values
    p[0].coeff = 5;
    p[0].exp   = 2;

    p[1].coeff = 3;
    p[1].exp   = 1;

    p[2].coeff = 7;
    p[2].exp   = 0;

    // Display polynomial
    printf("Polynomial is: ");
    for(int i = 0; i < 3; i++)
    {
        printf("%dx^%d", p[i].coeff, p[i].exp);
        if(i != 2)
            printf(" + ");
    }

    return 0;
}
