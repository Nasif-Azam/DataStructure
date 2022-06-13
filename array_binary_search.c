#include <stdio.h>
int main()
{
    int arr[50] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, item, loc, beg = 0, end = 9, mid = (beg + end) / 2;
    scanf("%d", &item);

    while (beg <= end && arr[mid] != item)
    {
        if (item < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        mid = (beg + end) / 2;
    }
    if (item == arr[mid])
    {
        loc = mid;
        printf("Location is %d", loc);
    }
    else
    {
        printf("Item %d isn't founded!!", item);
    }
    return 0;
}