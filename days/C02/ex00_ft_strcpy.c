#include<stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
        dest[i] = '\0'; // After the loop, i holds the index where the null terminator should be placed in dest.
			// By setting dest[i] = '\0';, you add the null terminator at the end of the dest string.
			// This marks the end of the string in dest, allowing functions that work with strings to correctly identify where the string ends.

	return(dest);	
}

int main()
{
	char str[] = "hello";
	int i = sizeof(str);
	char dest[i];

	ft_strcpy(dest,str); // first agument is the desrination and the second agrument is the sorce string
	for(int j= 0; j < i; j++)
	{
		printf("%c",dest[j]);	
	}
		printf("\n");

	return 0;
}

