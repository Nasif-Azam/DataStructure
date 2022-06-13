#include <stdio.h>
#include <stdlib.h>
#define size 5
int C_queue[size], i, j, front = -1, rear = -1;

void enqueue(int value)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        C_queue[rear] = value;
    }
    else if ((rear + 1) % size == front)
    {
        printf("Queue if full");
    }
    else
    {
        rear = (rear + 1) % size;
        C_queue[rear] = value;
        printf("Enqueue element is: %d", C_queue[rear]);
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
        printf("Queue is empty");
    }
    else
    {
        printf("Dequeued element is: %d", C_queue[front]);
        front = (front + 1) % size;
        C_queue[front - 1] = 0;
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
        while (i != size - 1)
        {
            printf("%d ", C_queue[i]);
            i = (i + 1) % size;
        }
        printf("%d ", C_queue[i]);
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