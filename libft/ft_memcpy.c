// Function that copies the first n characters from the
// source string to the destination string

/*#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char	src[] = "jessica";
	char	dest[] = "sales";
	int	n;

	n = 3;
	memcpy(dest, src, n);
	printf("Minha função: %s\n", dest);
//	printf("Função original: %s", dest);
	return (0);
}*/

void	*ft_mempcy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_src;
	unsigned char	*p_dest;

	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}
