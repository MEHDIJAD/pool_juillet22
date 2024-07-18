#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int i;
    int j;
    int k;
    i = 0;

    while (i <= 9)
    {
        j = 0;
        while ( j <= 9)
        {
            k = 0;
            while (k <= 9)
            {
               if (i != j && i != k && j != k && i < j && j < k)  // Ensure all digits are different (i != j && i != k && j != k ) 
                                                                  // and in ascending order(i < j && j < k)
               {
                    ft_putchar('0' + i); // Print the first digit
                    ft_putchar('0' + j); // Print the second digit
                    ft_putchar('0' + k); // Print the third digit
                    ft_putchar('\n'); // Print a newline character
                }
                k++;
            }
            j++;   
        }
        i++;
        
    }
    
}

   

int main()
{
    
    ft_print_comb();

    return 0;
}