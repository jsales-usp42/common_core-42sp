// Function that checks if the parameter is a digit between 0 and 9

/*#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	printf("Minha função: %d\n", ft_isdigit(5));
	printf("Função original: %d", isdigit(5));
	return (0);
}*/

int	ft_isdigit(int c)
{
	if (!(c >= 0 && c <= 9))
		return (0);
	return (c);
}
