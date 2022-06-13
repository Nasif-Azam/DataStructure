#include <stdio.h>
int main()
{
    int arr[10] = {30, 10, 60, 90, 20, 40, 80, 10, 5, 15}, n = 10;

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}