#include <stdio.h>

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

int main(void)
{
    char str[] = "0123456789abcdef";
    printf("%d", ft_double(str));
}