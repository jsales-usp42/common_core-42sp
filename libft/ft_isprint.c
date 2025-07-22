// Function that checks if the parameter is printable

/*#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c);

int	main(void)
{
	printf("Minha função: %d\n", ft_isprint('\n'));
	printf("Função original: %d", isprint('\n'));
	return (0);
}*/

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (c);
}
