#include <stdio.h>
char *ft_convert_base(char *nbr, char *base_from, char *base_to);
int main()
{
    char *nbr = "-21648"; 
	char *nbr2 = "420"; 
	char *nbr3 = "101"; 
	char *nbr4 = "po"; 
	char *nbr5 = "15"; 
	char *nbr6 = "2a";  
    
	printf("%s\n", ft_convert_base(nbr, "0123456789", "01"));
	printf("%s\n", ft_convert_base(nbr2, "0123456789abcdef", "01"));
	printf("%s\n", ft_convert_base(nbr3, "01", "0123456789abcdef"));
	printf("%s\n", ft_convert_base(nbr4, "poneyvif", "0123456789"));
	printf("%s\n", ft_convert_base(nbr5, "012345", "0123456789abcdef"));
	printf("%s\n", ft_convert_base(nbr6, "0123456789", "0123456789abcdef"));
}
