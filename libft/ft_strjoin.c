// Funtion that concatenates two strings using dynamic memory allocation

/*#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	ft_strlen(char const *s);

int	main(void)
{
	char	*s1 = "jessica";
	char	*s2 = "sales";
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("My function: %s", result);
	free(result);
	return (0);
}*/

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;

	p = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
