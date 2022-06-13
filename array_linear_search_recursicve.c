#include <stdio.h>
int LinearSearch(char arr[], int size, char item)
{
    if (size < 0)
    {
        return -1;
    }
    else if (item == arr[size])
    {
        return size;
    }
    else
    {
        return (LinearSearch(arr, size - 1, item));
    }
}

int main()
{
    char arr[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}, item = 'G';
    int size = 10;
    int loc = LinearSearch(arr, size, item);

    if (loc != -1)
        printf("Element '%c' is present at location: %d", item, loc);
    else
        printf("Element '%c' is not present", item);

    return 0;
}

// 1. Start
// 2. Declare charecter ARRAY and ITEM, array SIZE and LOC
// 3. Call a function LINEARSEARCH() and pass the ARRAY, SIZE and ITEM then goto step-4
// 4. In LINEARSEARCH() defination if(SIZE<0) then return -1 otherwise control will goto step-5
// 5. When ITEM == ARRAY[SIZE] is saticfied then return SIZE otherwise goto step-6
// 6. Return LINEARSEARCH(ARRAY, SIZE-1,ITEM) recursively then control will go main function
// 7. Check if LOC is not equal to -1 then display LOC otherwise display ITEM not exist
// 8. End