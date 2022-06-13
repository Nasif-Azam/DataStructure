#include <stdio.h>
#include <stdlib.h>
char demo;
struct node
{
    char val;
    struct node *left;
    struct node *right;
};

struct node *getnode()
{
    return (struct node *)malloc(sizeof(struct node));
};

struct node *top;
int c = 0;
struct node *add(struct node *FIRST)
{
    struct node *T;
    if (FIRST == NULL)
    {
        FIRST = getnode();
        T = top = FIRST;
        T->left = NULL;
    }
    else
    {
        T = getnode();
        top->right = T;
        T->left = top;
        top = T;
    }
    printf("Enter a val: ");
    c++;
    scanf("%c", &demo);
    scanf("%c", &T->val);
    T->right = NULL;
    return FIRST;
}

struct node *del(struct node *FIRST)
{
    struct node *T;
    if ((FIRST == NULL) && (c < 1))
    {
        printf("Underflow\n");
        return FIRST;
    }
    T = top;
    printf("The deleted value is : %c\n", T->val);
    if (c != 1)
    {
        top = T->left;
        T->left = NULL;
        top->right = NULL;
    }
    else if (c == 1)
    {
        FIRST = NULL;
    }
    c--;
    return FIRST;
}

void display(struct node *T)
{
    if (T == NULL)
    {
        printf("Empty\n");
        return;
    }
    printf("Null --> ");
    while (T != NULL)
    {
        printf("%c --> ", T->val);
        T = T->right;
    }
    printf("Null \n\n");
}
void search(struct node *T)
{
    if (T == NULL)
    {
        printf("Element not Founded!!\n");
    }
    else
    {
        char searchChar;
        int counter = 0;
        printf("Enter a value: \n");
        // scanf("%c", &demo);
        scanf("%c", &searchChar);
        // searchChar = demo;
        // gets(searchChar);
        while (T != NULL)
        {
            if (T->val == searchChar)
            {
                printf("Element is (%c) found at %d\n", searchChar, counter);
            }
            T = T->right;
            counter++;
        }
    }
}

void size(struct node *T)
{
    int countSize = 0;
    if (T == NULL)
    {
        printf("Stack is empty");
    }
    while (T != NULL)
    {
        T = T->right;
        countSize++;
    }
    printf("Size of stack: %d\n", countSize);
}

int main()
{
    struct node *F;
    int ch;
    F = NULL;
    top = F;
    printf("DOUBLY LINKED LIST IMPLEMENTATION OF STACK\n\n");
    while (1)
    {
        printf("1. Add new element\n");
        printf("2. Delete element\n");
        printf("3. Display elements \n");
        printf("4. Search element \n");
        printf("5. Size of stack \n");
        printf("6. Exit \n");
        printf("Choice: ");
        scanf("%d", &ch);
        printf("\n");
        if (ch == 1)
            F = add(F);
        else if (ch == 2)
            F = del(F);
        else if (ch == 3)
            display(F);
        else if (ch == 4)
            search(F);
        else if (ch == 5)
            size(F);
        else if (ch == 6)
            return;
    }
    return 0;
}