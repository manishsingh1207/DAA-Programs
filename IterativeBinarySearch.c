#include <stdio.h> 

int iterativeBinarySearch(int array[], int start_index, int end_index, int element)
{
    while (start_index <= end_index)
    {
        int middle = start_index + (end_index - start_index) / 2;
        if (array[middle] == element)
            return middle;
        if (array[middle] < element)
            start_index = middle + 1;
        else
            end_index = middle - 1;
    }
    return -1;
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

    int found_index = iterativeBinarySearch(array, 0, size - 1, key);
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