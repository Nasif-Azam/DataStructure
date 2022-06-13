#include <stdio.h>
int main()
{
    int pos, n = 5, arr[50] = {10, 20, 30, 40, 50, 60};
    printf("Enter position which you want to remove: ");
    scanf("%d", &pos);

    for (int i = (pos - 1); i <= (n - 1); i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Declare variables POS,N=5 and an array ARR[50] and pre-defined array items.
// Display a message like, "Enter position which you want to remove: ".
// Take input from the user for POS which is the position that user want to delete from the array.
// Repeat step-000 where for I=(POS-1) to I<=(N-1) and increment I by 1.
// ARR[I] value replaced by ARR[I+1].
// Repeat step-000 where for I=0 to I<N and increment I by 1.
// Display the items in the array.