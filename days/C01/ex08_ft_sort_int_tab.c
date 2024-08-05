#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    for (int i = 0; i < size - 1; i++) // it runs 8 times (size - 1 = 9 - 1 = 8)
    {
        for (int j = 0; j < size - 1 - i; j++) // loops for n - the last character sorted / size - 1 - i (i will go from 9 to 8 all the way to 0)
        {
            if (tab[j] > tab[j + 1]) // take the condition 
            {
                int tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int arrint[] = {9, 5, 1, 7, 4, 6, 8, 3, 2, 0};
    int size = 10;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arrint[i]);
    }
    printf("\n");

    
    ft_sort_int_tab(arrint, size);

    // Print sorted array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arrint[i]);
    }
    printf("\n");

    return 0;
}

