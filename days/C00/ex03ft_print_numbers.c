#include<unistd.h>

void ft_print_numbers(void) // The write function only takes a single character as an argument. '10' is two characters.
{
    char c = '0'; 
    while (c <= '9')
    {
        write(1, &c, 1);
        c++;
    }
    
    
}

int main()
{
    ft_print_numbers();

    return 0;
}