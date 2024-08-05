#include <unistd.h>
#include <stdio.h>





//Prototypes
void 	ft_putnbr_base(int, char *);
void	ft_putchar(char c);
void    printNbr(int, int, char *); 
int		doubleChar(char *);







//COMMAND LINE ARGUMENTS argv[1]=n ; argv[2]=symbols

// ~gcc ft_putnbr_base.c && ./a.out 42 "01"

int		main(void)
{
	int		n;
	
	//I use commandLine args for tests
	//Use simple strings if u dunno yet
	n = 42;//Ok
	char baseSymbols[] = "0123456789abcdef";//Ok

	//Exercise function
	ft_putnbr_base(n, baseSymbols);
}







void 	ft_putnbr_base(int nbr, char *base)
{
	int		baseValue;

	baseValue = 0;

	//🚨PRELIMINARY CONTROLS🚨
	
	
	//Get the value of my base
	//With a nested constrain control
	while (base[baseValue])
	{
		//I do i constrain check in beetween💡
		//base contains + or - ;
		if (base[baseValue] == '+' || base[baseValue] == '-')
			return;
		//Actual base value
		++baseValue;
	}


	//base is empty or size of 1;
	if (baseValue < 2)
		return;

	
	//base contains the same char twice
	if (doubleChar(base)) //Ok!
		return;

	//✅ CHECKS PASSED ✅
	//Recursively print number
	printNbr(nbr, baseValue, base);
}







void	printNbr(int n, int baseValue, char *symbols)
{
	//🚨 PRELIMINARY WORK 🚨
	//CASE WHEN N is Negative
	//long type, to trick the Overflow
	long 	nLong;

	nLong = n;
	if (nLong < 0)
	{
		//I'm sure here, no Overflow 
		nLong = -nLong;
		ft_putchar('-');
	}


	//🥩 REAL MEAT 🥩  
	//Elegance of recursion 💃
	if (nLong >= baseValue)
		printNbr(nLong / baseValue, baseValue, symbols);
	ft_putchar(symbols[nLong % baseValue]);
}






int 	doubleChar(char *symbols)
{
	int		i;
	int		j;

	i = 0;
	//Iteratively search for a double char
	//Same idea print_comb-> ~https://youtu.be/qshq8KnmWx8
	while (*(symbols + i))
	{
		j = i + 1;	
		while (*(symbols + j))
		{
			if (*(symbols + i) == *(symbols + j))
				return 1;
			++j;
		}
		++i;
	}
	return 0;
}

void    ft_putchar(char c)
{
    write(1,  &c, 1);
}
