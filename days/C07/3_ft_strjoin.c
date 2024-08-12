#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len])
	{
		len++;
	}
	return (len);
}

char *ft_strcat(char *dest, char *src)
{
    int dest_len;
    int i;
    dest_len = ft_strlen(dest);
    i = 0;
    while(src[i])
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return(dest);
}


char *ft_strjoin(int size, char **strs, char *sep)
{
	int strs_len;
	int sep_len;
	int len;
	int i;
    int j;
    strs_len = 0;

    i = 0;
	while (i < size)
	{
		strs_len = strs_len + ft_strlen((strs[i]));
		i++;
	}
	sep_len = ft_strlen(sep) * (size - 1);
	len = strs_len + sep_len;
    char *result_str = malloc(sizeof(char) * len + 1);
    if (result_str == NULL)
        return (NULL);
    result_str[0] = '\0';
    i = 0;
    while(i < size)
    {
        ft_strcat(result_str, strs[i]);
        if (i < size - 1)
            ft_strcat(result_str, sep);
        i++;

    }

    return (result_str);
}

int	main()
{

	char *strs[] = {"my", "nam", "is", "mahdi"}; 
	char *sep = " ";  
	int size = 4;
	char *result = ft_strjoin(size,strs,sep);
    if (result != NULL)
        printf("%s",result);
    free(result);
}