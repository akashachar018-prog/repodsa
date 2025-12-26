#include <stdio.h>

int main()
{
    int adj[4][4] = {
        {0,1,1,0},
        {1,0,0,1},
        {1,0,0,0},
        {0,1,0,0}
    };

    int queue[10], front = 0, rear = 0;
    int visited[4] = {0};
    int i, v = 0;

    queue[rear++] = v;
    visited[v] = 1;

    printf("BFS: ");
    while(front < rear)
    {
        v = queue[front++];
        printf("%d ", v);

        for(i = 0; i < 4; i++)
        {
            if(adj[v][i] && !visited[i])
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
    return 0;
}
