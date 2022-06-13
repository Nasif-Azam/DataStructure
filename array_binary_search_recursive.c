#include <stdio.h>

int BinarySearch(char arr[], int beg, int end, char item)
{
    int mid = (beg + end) / 2;
    if (beg > end)
    {
        return -1;
    }
    else if (item == arr[mid])
    {
        return mid;
    }
    else if (item < arr[mid])
    {
        return BinarySearch(arr, beg, mid - 1, item);
    }
    else
    {
        return BinarySearch(arr, mid + 1, end, item);
    }
}

int main()
{
    char arr[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}, item = 'F';
    int beg = 0, end = 9, loc;
    loc = BinarySearch(arr, beg, end, item);
    if (loc != -1)
        printf("Element '%c' is present at location: %d", item, loc);
    else
        printf("Element '%c' is not present", item);

    return 0;
}

// 1. Start
// 2. Declare charecter ARRAY and ITEM, array SIZE, BEG,END, and LOC
// 3. Call a function BINARYSEARCH() and pass the ARRAY, BEG, END and ITEM then goto step-4
// 4. In BINARYSEARCH() defination Int(MID=(BEG+END)/2)
// 5. If(BEG>END) then return -1 otherwise if (ITEM==ARRAY[MID]) then retuen MID
// 6. If ITEM is less than ARRAY[MID] then return BINARYSEARCH() recursively where END updated to MID-1 otherwise control will goto step-7
// 7. Return BINARYSEARCH() recursively where BEG updated to MID+1 then control will go main function
// 8. Check if LOC is not equal to -1 then display LOC otherwise display ITEM not exist
// 9. End