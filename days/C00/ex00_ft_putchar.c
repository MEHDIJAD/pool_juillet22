#include<unistd.h>

void ft_putchar(char c) //function that displays the character passed as a parameter.
{
    write(1, &c, 1);
}

int main()
{
    ft_putchar('a'); 
    
    
}