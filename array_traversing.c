#include <stdio.h>
int main()
{
    int arr[50] = {10, 20, 30, 40, 50, 60};
    printf("Array items are: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int num1, num2;
    char plus = '+', minus = '-';
    printf("Enter num1 and num2: ");
    scanf("%d %d", num1, num2);

    printf("%d%c%d= %d", num1, plus, num2, num1 + num2);

    return 0;
}
