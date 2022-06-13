#include <stdio.h>
int main()
{
    int arr[10] = {30, 10, 60, 90, 20, 40, 80, 10, 5, 15}, n = 10;
    int i = 1;
    while (i < n)
    {
        int j = i, temp = arr[j];
        while (j > 0 && arr[j - 1] > temp)
        {
            arr[j] = arr[j - 1];
            j--;
            arr[j] = temp;
        }
        i++;
    }

    for (int c = 0; c < n; c++)
    {
        printf("%d ", arr[c]);
    }

    return 0;
}