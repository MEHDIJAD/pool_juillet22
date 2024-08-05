#include<stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int *start = tab; // pointer (*start) to point at the tab and tab points at the first integer of the array
    int *end = tab +(size - 1);//pointer (*end) points at the last integer of the array (tab + (size - 1)) 
    // using pointer arithmetic to add (size = 10 - 1 = 9) to the address of tab to move it to th last integer of array
    
    int tmp;

    while (start < end) //while start 0 < end 9 
    {
        tmp = *start; // it will hold the value in stored in *start(dereference) tmp = 0
        *start = *end; // gives the value in stored in *end to start (first 9)
        *end = tmp; // give value tmp = 0 to *end
        start++;
        end--;
    }
    
    


    
}

int main()
{
    int j = 10;
    int i[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int k = 0; k < j; k++)
    printf("%d", i[k]);
    printf("\n");
    ft_rev_int_tab(i, j);
    for(int k = 0; k < j; k++)
    printf("%d", i[k]);
    
}