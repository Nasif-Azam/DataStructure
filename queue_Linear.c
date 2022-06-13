#include <stdio.h>
#include <stdlib.h>
#define size 5
int queue[size], i, j, front = -1, rear = -1;

void enqueue(int value)
{
    if (rear == size - 1)
    {
        printf("Queue is full(Overflow).");
    }
    else if (rear == -1 && front == -1)
    {
        rear = front = 0;
        queue[rear] = value;
        printf("Enqueue item is: %d", queue[rear]);
    }
    else
    {
        rear++;
        queue[rear] = value;
        printf("Enqueue item is: %d", queue[rear]);
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("No element for delete(Underflow).");
    }
    else if (front == rear)
    {
        rear = front = -1;
        printf("Queue is empty");
    }
    else
    {
        printf("Dequeue item is: %d", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Queue items are: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}
int main(int argc, char const *argv[])
{
    int ch, val;
    do
    {
        printf("\nMenu");
        printf("\n1. ENQUEUE");
        printf("\n2. DEQUEUE ");
        printf("\n3. DISPLAY QUEUE");
        printf("\n4. Exit");
        printf("\nEnter your choice 1 to 4=");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value to be inserted=");
            scanf("%d", &val);
            enqueue(val);
            break;
        case 2:
            dequeue();
            break;
        case 3:

            display();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("Invalid choice!");
            break;
        }
    } while (ch <= 3);

    return 0;
}