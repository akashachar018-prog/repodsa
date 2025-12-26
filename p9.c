#include <stdio.h>
#define SIZE 5
int main()
{
    int queue[SIZE];
    int front = -1, rear = -1;
    int choice, item;
    while(1)
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: // Insert
                if(rear == SIZE - 1)
                {
                    printf("Queue is full");
                }
                else
                {
                    if(front == -1)
                        front = 0;

                    printf("Enter element: ");
                    scanf("%d", &item);

                    rear++;
                    queue[rear] = item;
                }
                break;

            case 2: // Delete
                if(front == -1 || front > rear)
                {
                    printf("Queue is empty");
                }
                else
                {
                    printf("Deleted element: %d", queue[front]);
                    front++;
                }
                break;

            case 3: // Display
                if(front == -1 || front > rear)
                {
                    printf("Queue is empty");
                }
                else
                {
                    printf("Queue elements: ");
                    for(int i = front; i <= rear; i++)
                        printf("%d ", queue[i]);
                }
                break;

            case 4:
                return 0;
        }
    }
}
