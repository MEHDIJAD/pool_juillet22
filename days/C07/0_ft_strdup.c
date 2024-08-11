#include <stdlib.h>
#include<string.h>
#include<stdio.h>

char *ft_strdup(char *src)
{
    int i;
    i = 0;
    char *new ;
    new = malloc((sizeof(char) * strlen(src))+ 1);
    if (!new)
        return (NULL);
    
    while (src[i] != '\0')
    {
        new[i] = src[i];
        i++;
    }
    new[i] = '\0';
    return(new); 

}

int main(int argc, char *argv[])
{
    int i;
    char *str;
    str = ft_strdup(argv[1]);
    printf("%s", str);          
}