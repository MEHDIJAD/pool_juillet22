#include<stdio.h>
#include<unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    ;
    while (*str)
    {
        str++;
        i++;
    }
    return i;
    
}

int main()
{
    char c[] = "hello wolrd";

    printf("%d",ft_strlen(c));

    

}