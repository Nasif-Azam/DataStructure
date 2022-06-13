#include <stdio.h>
#include <stdlib.h>
#define size 5
int queue[size], i, j, front = -1, rear = -1;

void enqueue(int value)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = value;
    }
    else if ((rear + 1) % size == front)
    {
        printf("Queue is full.\n");
    }
    else
    {
        rear = (rear + 1) % size;
        queue[rear] = value;
        printf("Inserted element: %d\n", queue[rear]);
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("No element to delete.\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("Deleted element: %d\n", queue[front]);
        front = (front + 1) % size;
        queue[front - 1] = 0;
    }
}

void display()
{
    int i = 0;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Elements in the queue: ");
        while (i != 4)
        {
            printf("%d ", queue[i]);
            i++;
        }
        printf("%d ", queue[i]);
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

// Step