// Function that converts the letter passed as a parameter
// to uppercase

/*#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int 	c);

int	main(void)
{
	int	x;

	x = '$';
	printf("Minha função: %d\n", ft_toupper(x));
	printf("Função original: %d", toupper(x));
	return (0);
}*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
