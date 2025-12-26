#include <stdio.h>

int main()
{
    int adj[4][4] = {
        {0,1,1,0},
        {1,0,0,1},
        {1,0,0,0},
        {0,1,0,0}
    };

    int stack[10], top = -1;
    int visited[4] = {0};
    int i, v = 0;

    stack[++top] = v;

    printf("DFS: ");
    while(top != -1)
    {
        v = stack[top--];

        if(!visited[v])
        {
            printf("%d ", v);
            visited[v] = 1;

            for(i = 3; i >= 0; i--)
                if(adj[v][i] && !visited[i])
                    stack[++top] = i;
        }
    }
    return 0;
}
