// Funtion that returns a substring from the original string

/*#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	ft_strlen(char *s);

int	main(void)
{
	char	*s = "jessica";
	int	start = -1;
	int	len = 3;
	char	*result;

	result = ft_substr(s, start, len);
	printf("Minha função: %s", result);
	free(result);
	return (0);
}*/

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	char			*p;

	if (start > ft_strlen(s))
	{
		p = malloc(1);
		p[0] = '\0';
		return (p);
	}
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (i < len + start && s[i] != '\0')
	{
		p[j] = s[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);
}
