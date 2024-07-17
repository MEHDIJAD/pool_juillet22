#include<unistd.h>

void ft_is_negative(int n)

{
    
    if(n > 0)
    {
        
        write(1, "p", 1);  // put "p" NOT 'P'
    }
    else{
        
        write(1, "N", 1);
    }
    
    
}

int main()
{
    ft_is_negative(-1);
}