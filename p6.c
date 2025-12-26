#include <stdio.h>
#include <string.h>

int main()
{
    char text[50], pattern[20];
    int i, j, found = 0;
    printf("Enter main string: ");
    gets(text);
    printf("Enter pattern: ");
    gets(pattern);
    for(i = 0; i <= strlen(text) - strlen(pattern); i++)
    {
        for(j = 0; j < strlen(pattern); j++)
        {
            if(text[i + j] != pattern[j])
            {
                break;
            }
        }
        if(j == strlen(pattern))
        {
            printf("Pattern found at position %d\n", i + 1);
            found = 1;
        }
    }
    if(found == 0)
    {
        printf("Pattern not found");
    }
    return 0;
}
