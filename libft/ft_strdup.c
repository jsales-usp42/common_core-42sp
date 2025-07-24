// Function that copies a string to another and returns the
// pointer to the new string

/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s);

int	main(void)
{
	char	*s = "jessica";
	char	*ft = ft_strdup(s);
	char	*or = strdup(s);

	printf("Minha função: %s\n", ft);
	printf("Função original: %s", or);
	free(ft);
	free(or);
	return (0);
}*/

char	*ft_strdup(const char *s)
{
	int		i;
	char	*p;

	i = 0;
	while (s[i] != '\0')
		i++;
	p = (char *)malloc(sizeof(i) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
