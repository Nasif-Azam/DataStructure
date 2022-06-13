#include <stdio.h>
#include <string.h>
int arr[10] = {30, 10, 60, 90, 20, 40, 80, 10, 5, 15}, n = 10, min, loc;
void minFun(int i, int n)
{
    min = arr[i], loc = i;
    for (int j = i + 1; j < n; j++)
    {
        if (min > arr[j])
        {
            min = arr[j];
            loc = j;
        }
    }
}

int main()
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        minFun(i, n);
        temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
