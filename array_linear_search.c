#include <stdio.h>
int main()
{
    int arr[5] = {50, 20, 10, 60, 40}, n = 5, loc = -1, x = 20;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            loc = i;
            break;
        }
    }
    if (loc == -1)
    {
        printf("%d Term not found", x);
    }
    else
    {
        printf("Item found at %d location", loc);
    }
    return 0;
}