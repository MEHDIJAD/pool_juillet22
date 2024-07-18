#include<stdio.h>

void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a; // tmp = *a(dereference) = 42 / to hold *a value in tmp 
    *a = *b; // give *b to *a by refrence (a* = 1337)
    *b = tmp; // give value tmp to *b / *b = 42
}

int main()

{
    int i;
    int j;
    i = 42;
    j = 1337;
    printf("i==>%d  j==>%d\n", i, j);
    ft_swap(&i, &j);
    printf("i==>%d  j==>%d", i, j);
}