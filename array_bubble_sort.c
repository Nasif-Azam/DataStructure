#include <stdio.h>
int main()
{
    int arr[10] = {30, 10, 60, 90, 20, 40, 80, 10, 5, 15}, n = 10;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}