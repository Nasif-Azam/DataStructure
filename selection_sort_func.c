#include <stdio.h>
#include <string.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int min_idx;
    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted Array: \n");
    printArray(arr, n);
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// char arr[10] = {'N', 'D', 'S', 'F', 'I', 'Q', 'O', 'P', 'Z', 'L'};
// int size = 10, max, loc;
// void maxFun(int i, int size)
// {
//     max = arr[i], loc = i;
//     for (int j = i + 1; j < size; j++)
//     {
//         if (max > arr[j])
//         {
//             max = arr[j];
//             loc = j;
//         }
//     }
// }

// int main()
// {
//     int temp;
//     for (int i = 0; i < size - 1; i++)
//     {
//         maxFun(i, size);
//         temp = arr[i];
//         arr[i] = arr[loc];
//         arr[loc] = temp;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         printf("%c ", arr[i]);
//     }
//     return 0;
// }
