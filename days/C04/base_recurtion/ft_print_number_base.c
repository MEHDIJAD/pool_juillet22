#include <stdio.h>
#include <unistd.h>

void    ft_putnbr_base(int nbr, char *strbase);
void    ft_printnbr(int nbr, int basev, char *base);
void    ft_putchar(char c);
int ft_double(char *str);

int main(void)
{
    int nbr = -42;
    char strbase[] = "01";
    ft_putnbr_base(nbr, strbase);

}

void    ft_putnbr_base(int nbr, char *base)
{
    int basev;

    basev = 0;
    while (base[basev] != '\0') // this loop while give me basev = 16 / and will make sure str don't have + or - 
    {
        if (base[basev] == '+' || base[basev] == '-')
            return;
        basev++;
    }
    if (basev < 2)
        return;
    if (ft_double(base) == 0)
        return;
    ft_printnbr(nbr, basev, base);
    
    
}

void    ft_printnbr(int nbr, int baseValue, char *base)
{
    int nb;

    nb = nbr;
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if (nb >= baseValue)
        ft_printnbr(nb / baseValue, baseValue, base);
    ft_putchar(base[nb % baseValue]);
    
}

int ft_double(char *str)
{
    int i;
    int j;

    i = 0;
    while (str[i] !='\0')
    {
        j = i + 1;
        while (str[j] != '\0')
        {
            if (str[i] != str[j])
                j++;
            else 
                return 0;
        }
        i++;
        
    }
    return 1;
    
}

void    ft_putchar(char c)
{
    write(1,  &c, 1);
}


