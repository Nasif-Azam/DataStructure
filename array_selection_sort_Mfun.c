#include <stdio.h>
#include <string.h>
char arr[10] = {'N', 'D', 'S', 'F', 'I', 'Q', 'O', 'P', 'Z', 'L'};
int size = 10, max, loc;
void maxFun(int i, int size)
{
    max = arr[i], loc = i;
    for (int j = i + 1; j < size; j++)
    {
        if (max < arr[j])
        {
            max = arr[j];
            loc = j;
        }
    }
}

int main()
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        maxFun(i, size);
        temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }

    return 0;
}
