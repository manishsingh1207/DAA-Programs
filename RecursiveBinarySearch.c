#include <stdio.h>

int RecursiveBinarySearch(int nums[], int low, int high, int target)
{
    if (low > high) {
        return -1;
    }
    int mid = (low + high)/2;     

    if (target == nums[mid]) {
        return mid;
    }

    else if (target < nums[mid]) {
        return RecursiveBinarySearch(nums, low, mid - 1, target);
    }
 
    else {
        return RecursiveBinarySearch(nums, mid + 1, high, target);
    }
}
 
int main()
{
    int key, size;
    int array[25];

    printf("Enter size of a array: ");
    scanf("%d", &size);
    printf("Enter elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter key to search:\n");
    scanf("%d", &key);

    int found_index = RecursiveBinarySearch(array, 0, size - 1, key);
    if (found_index == -1)
    {
        printf("Element not found in the array ");
    }
    else
    {
        printf("Element found at index : %d\n", found_index);
    }
    return 0;
}