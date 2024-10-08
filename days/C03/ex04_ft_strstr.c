#include<stdio.h>
#include<string.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (to_find[0] == '\0')
    {
        return str;
    }
    while (str[i] != '\0')
    {
        j = 0;
        while (to_find[j] != '\0' && str[i + j] == to_find[j])
        {
            j++;
        }
        if (to_find[j] == '\0')
            return &str[i];
        i++;
    } 
    return(0);

}

int main()
{
    char str[] = "sweater";
    char find[] = "eat";
    printf("%s ",ft_strstr(str, find));
    printf("%s", strstr(str, find));
}   