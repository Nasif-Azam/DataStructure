#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverser(struct node *ptr)
{
    int count = 0;
    while (ptr != NULL)
    {
        printf("Element(%d): %d\n", count, ptr->data);
        ptr = ptr->next;
        count++;
    }
    printf("Count= %d", count);
}

// struct node *insert_beg(struct node *head, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->next = head;
//     ptr->data = data;
//     return ptr;
// }
struct node *insert_mid(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 25;
    fourth->next = NULL;

    int new_data = 40, index = 2;
    // head = insert_beg(head, new_data);
    head = insert_mid(head, new_data, index);
    traverser(head);

    return 0;
}