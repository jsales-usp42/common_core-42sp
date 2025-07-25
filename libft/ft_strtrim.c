// Functions that ...

#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char	*s1 = "jessica";
	char	*set = "ssi";
	char	*result;

	result = ft_strtrim(s1, set);
	printf("My function: %s", result);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	char	*p;


