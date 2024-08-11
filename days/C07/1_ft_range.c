#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int i;
    int *arr;
    if (min >= max)
        return(NULL);
    arr = malloc(sizeof(int) * (max - min));
    if (!arr)
        return (NULL);
    
    i = 0;
    while (i < max - min - 1)
    {
        arr[i] = min + i;
    }
    return (arr);
    

}
int main()
{
    int max;
    int min;
    int *arr;
    int i;
    max = 10;
    min = 2;
    arr = ft_range(min, max);
    i = 0;
    while(i < max - min)
    {
        printf("%d ", arr[i]);
        i++;
    }
}