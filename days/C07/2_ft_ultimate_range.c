#include <stdio.h>
#include <stdlib.h>

// Function to allocate and assign an array of integers from min to max (exclusive)
int ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int i;

    if (min >= max)
    {
        *range = NULL;
        return -1;
    }

    size = max - min;
    *range = (int *)malloc(size * sizeof(int));
    if (*range == NULL)
        return -1;

    for (i = 0; i < size; i++)
    {
        (*range)[i] = min + i;
    }

    return size;
}

int main(void)
{
    int *array;
    int min = 5;
    int max = 10;
    int size;
    int i;

    // Test 1: Valid range
    size = ft_ultimate_range(&array, min, max);
    if (size != -1)
    {
        printf("Range from %d to %d (size %d): ", min, max, size);
        for (i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");
        free(array); // Free the allocated memory
    }
    else
    {
        printf("Failed to allocate memory or invalid range.\n");
    }

    // Test 2: min >= max (should return -1)
    min = 10;
    max = 5;
    size = ft_ultimate_range(&array, min, max);
    if (size == -1)
    {
        printf("Correctly handled invalid range from %d to %d.\n", min, max);
    }
    else
    {
        printf("Error: range from %d to %d should be invalid.\n", min, max);
        free(array);
    }

    // Test 3: min == max (should return -1)
    min = 7;
    max = 7;
    size = ft_ultimate_range(&array, min, max);
    if (size == -1)
    {
        printf("Correctly handled range from %d to %d (same values).\n", min, max);
    }
    else
    {
        printf("Error: range from %d to %d should be invalid.\n", min, max);
        free(array);
    }

    return 0;
}
