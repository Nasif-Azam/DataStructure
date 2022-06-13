#include <stdio.h>
#include <stdlib.h>
#define size 5
char stack[size];
int top = -1;

void push(char val)
{
    if (top >= size - 1)
        printf("Stack is full.\n");
    else
    {
        top++;
        stack[top] = val;
        printf("Inserted element: %c\n", stack[top]);
    }
}
void pop()
{
    if (top <= -1)
    {
        printf("No element to delete.\n");
    }
    else
    {
        printf("The popped element = %c\n", stack[top]);
        top--;
    }
}
void pop_mid(int pos)
{
    char arr[5];
    int count = 0;
    for (int i = pos; i < size; i++)
    {
        if (i != pos)
        {
            arr[count] = stack[i];
            count++;
        }
        pop();
    }

    for (int i = count - 1; i >= 0; i--)
    {
        push(arr[i]);
    }
    show();
}
void show()
{
    if (top >= 0)
    {
        printf("Stack Elements are:\n");
        for (int i = 0; i <= top; i++)
            printf("%c ", stack[i]);
    }
    else
    {
        printf("Stack is Empty\n");
    }
}

int main(int argc, char const *argv[])
{
    int ch, pos;
    char val;
    do
    {

        printf("\nMenu");
        printf("\n1. PUSH");
        printf("\n2. POP ");
        printf("\n3. SHOW STACK");
        printf("\n4. POP from Middle");
        printf("\n5. Exit");
        printf("\nEnter your choice 1 to 5=");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value to be pushed=");
            scanf("%c", &val);
            scanf("%c", &val);
            push(val);
            break;
        case 2:
            pop();
            break;

        case 3:
            show();
            break;
        case 4:
            printf("Enter the position=");
            scanf("%d", &pos);
            pop_mid(pos);
            break;
        case 5:
            exit(0);
            break;

        default:
            printf("Invalid choice!");
            break;
        }

    } while (ch <= 4);
    return 0;
}