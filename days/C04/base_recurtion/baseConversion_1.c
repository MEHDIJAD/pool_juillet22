#include<stdio.h>
/*42 mod 2 =	 0 
42 div 2 = 21



21 mod 2 =	     1 
21 div 2 = 10



10 mod 2 =	     0 
10 div 2 = 5



5 mod 2 =	    1 
5 div 2 = 2



2 mod 2 =	    0 
2 div 2 = 1



1 mod 2 =	    1 
1 div 2 = 0*/
 
 // (101010) base 2 = (42) base 10

//Convert n in a base

#define base 16

int main()
{	
	int		n;

	n = 152;
	while (n)
	{
		printf("\n\n\n%d mod %d =\t %d \n", n, base, n % base); 
		printf("%d div %d = %d\n", n, base, (n / base));

		//👀
		n /= base;
	}	
	puts("\n\n\n");

}