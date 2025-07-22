// Function that checks if a character is a letter of the alphabet

/*#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	int	x = 'P';
	
	printf("Minha função: %d\n", ft_isalpha(x));
	printf("Função original: %d", isalpha(x));
	return (0);
}*/

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
