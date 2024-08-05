#include<stdio.h>



//Convert n in a base




void		magic(int nb, int baseValue ,char *baseSymbols) // it takes : int to convert / base(16,2,8..) / and a str pointer
{
	if (nb > baseValue)// 42 > 16
		magic(nb / baseValue, baseValue, baseSymbols);// recurtion (go to line 10)
            // magic / 1 argument is 42 / 16 = 2 / 16 /str
            // 2 < 16 ==> skip line 13
	char	mySymbol;// char am looking for 
	
	mySymbol = baseSymbols[nb % baseValue]; // = str[2 % 16 = 2] ==> str[2]
	while (*baseSymbols != mySymbol) // go trought my str intel find mysymbol
		baseSymbols++;
	printf("%c", *baseSymbols);// print mysymbol ==> 2

    // copy magic 1 : starts for line 10 skip line 13 for (2 < 16) line 18-21 ==> print 2
    // go to original magic line ==> line 18-21 ==> print a
}		


int main()
{	
	int		n = 152;
	char 	baseSymbols[] = "0123456789abcdef";
	int		baseValue = 16;

	magic(n, baseValue, baseSymbols);
}