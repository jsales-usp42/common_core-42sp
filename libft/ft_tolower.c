// Function that converts the letter passed as a parameter
// to lowercase

/*#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c);

int	main(void)
{
	int	x;

	x = '&';
	printf("Minha função: %d\n", ft_tolower(x));
	printf("Função original: %d", tolower(x));
	return (0);
}*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
