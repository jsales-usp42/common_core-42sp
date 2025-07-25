// Funtion that searches for the little string in the big string
// according to the number of characteres passed as a parameter

/*#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int	main(void)
{
	char	*big = "jessica";
	char	*little = "";
	int	len = 6;

	printf("Minha função: %s\n", ft_strnstr(big, little, len));
//	printf("Função original: %s", strnstr(big, little, len));
	return (0);
}*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (i + j < len && little[j] != '\0' && big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
