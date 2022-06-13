#include <stdio.h>
#include <string.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
}

int main()
{
    char exp[100], postfix[100];
    char *e, x;
    int i = 0;
    printf("Enter the expression : ");
    scanf("%s", exp);
    printf("\n");
    e = exp;

    while (*e != '\0')
    {
        if (isalnum(*e))
        {
            postfix[i++] = *e;
            printf("%c ", *e);
        }
        else if (*e == '(')
        {
            postfix[i++] = *e;
            push(*e);
        }
        else if (*e == ')')
        {
            while ((x = pop()) != '(')
            {
                postfix[i++] = *e;
                printf("%c ", x);
            }
        }
        else
        {
            while (priority(stack[top]) >= priority(*e))
            {
                postfix[i++] = *e;
                printf("%c ", pop());
            }
            postfix[i++] = *e;
            push(*e);
        }
        e++;
    }

    while (top != -1)
    {
        printf("%c ", pop());
    }
    // printf("\nPrefix: \n");
    // for (int i = 50; i >= 0; i--)
    // {
    //     printf("%c ", postfix[i]);
    // }
    strrev(postfix);
    printf("\nPre Fix: %s", postfix);
    return 0;
}