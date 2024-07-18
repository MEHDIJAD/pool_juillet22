#include<unistd.h>

void ft_print_alphabet(void)  /*function that displays the alphabet in lowercase, on a single line, by ascending order,
                               starting from the letter ’a’.*/

{
    char c = 'a';
    while (c <= 'z')
    {
        write(1, &c,1);
        c++;
    }
}

int main()
{
    ft_print_alphabet();
}