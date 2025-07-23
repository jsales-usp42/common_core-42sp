// Function that points to the position where the character c is 
// being searched for

/*#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	char	*s = "jessica";
	int	c;
	int	n;
	char	*result;
	char	*result2;

	c = 'i';
	n = 6;
	result = ft_memchr(s, c, n);
	result2 = memchr(s, c, n);
	printf("Minha função: %s\n", result);
	printf("Função originagl: %s", result2);
	return (0);
}*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
