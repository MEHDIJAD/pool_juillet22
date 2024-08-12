#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    /*int resultDiv;
    int remander;
    resultDiv = a / b;
    remander = a - b *(a / b);
    *div = resultDiv;
    *mod = remander; OR*/
   *div = a / b;
   *mod = a % b;

}

int main()
{
    int a = 10;
    int b = 3;
    ft_div_mod(a, b, &a, &b);
    printf("Result of division :%d\t and the remander is :%d\n",a ,b);
}