// Function that checks if the parameter is alphanumeric

/*#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	printf("Minha função: %d\n", ft_isalnum(4));
	printf("Função original: %d", isalnum(4));
	return (0);
}*/

int	ft_isalnum(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
	{
		if (!(c >= 0 && c <= 9))
			return (0);
	}
	return (c);
}
