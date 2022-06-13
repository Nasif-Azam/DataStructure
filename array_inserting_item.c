#include <stdio.h>
int main()
{
    int pos, item, j, n = 5, arr[50] = {10, 20, 30, 40, 50, 60};
    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter an item: ");
    scanf("%d", &item);
    for (j = n; j >= (pos - 1); j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[pos - 1] = item;
    printf("After inserting array is: ");
    for (int i = 0; i <= n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
// Declare variables POS,ITEM, N=5 and an array ARR[50] and pre-defined array items.
// Display a message like, "Enter position: "
// Take input from the user for POS which is the position where user want to insert a item.
// Display a message like, "Enter item: "
// Take input from the user for ITEM which is the item what user want to insert.
// Repeat step-6 where for J=N to J>=(POS-1) and decrement J by 1.
// ARR[J+1] value replaced by ARR[J].
// Display a message like, "After inserting array is:".
// Repeat step-9 where for I=0 to I<=(N+1) and increment I by 1.
// Display the items in array.