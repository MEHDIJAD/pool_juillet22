#include <stdio.h>


int ft_atoi(char *str)
{
    int i = 0;
    int signe = 0;
    int number = 0;
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
    {
        i++;
    }
    // or use while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-' )
            signe++;
        i++; 
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        number = number * 10 + str[i] - 48;
        i++;
    }
    if (signe % 2 != 0)
        return (-number);
    
    return (number);
    
    
    
}
int main (void)
{
    char str[] = " ---+--+1234ab567";
    printf("%d",  ft_atoi(str));
}