// Function that checks if the parameter is a character ASCII

/*#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	printf("Minha função: %d\n", ft_isascii('%'));
	printf("Função original: %d", isascii('%'));
	return (0);
}*/

int	ft_isascii(int c)
{
	if (!(c >= ' ' && c <= '~'))
		return (0);
	return (c);
}
