#include<stdio.h>

void ft_ultimate_ft(int *********nbr)
{ 
*********nbr = 42;
}

int main()
{
    int n; 
    int *p1, **p2,  ***p3,  ****p4,  *****p5,  ******p6,  *******p7,  ********p8,  *********p9;
    p1 = &n;
    p2 = &p1;
    p3 = &p2;
    p4 = &p3;
    p5 = &p4;
    p6 = &p5;
    p7 = &p6;
    p8 = &p7;
    p9 = &p8;
    ft_ultimate_ft(p9);


    printf("%d\n", n);
    

}