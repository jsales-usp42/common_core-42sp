/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:55:30 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 16:10:35 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Functions that removes the characters in 'set' from the beginning and end
// the original string

/*#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	ft_strlen(const char *s1);

int	search_initial(char const *s1, char const *set, int index);

int	search_final(char const *s1, char const *set, int index);

int	main(void)
{
	char	*s1 = "xyjessicazx";
	char	*set = "x";
	char	*result;

	result = ft_strtrim(s1, set);
	printf("My function: %s", result);
	free(result);
	return (0);
}*/

int	ft_strlen(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

int	search_initial(char const *s1, char const *set, int index)
{
	int	i;
	int	j;

	i = index;
	while (s1[i])
	{
		j = 0;
		while (j < ft_strlen(set) && set[j] != s1[i])
			j++;
		if (j == ft_strlen(set))
			return (i);
		i++;
	}
	return (0);
}

int	search_final(char const *s1, char const *set, int index)
{
	int	i;
	int	j;

	i = index;
	while (i > 0)
	{
		j = 0;
		while (j < ft_strlen(set) && set[j] != s1[i])
			j++;
		if (j == ft_strlen(set))
			return (i);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		initial;
	int		final;
	char	*p;

	initial = search_initial(s1, set, 0);
	final = search_final(s1, set, ft_strlen(s1) - 1);
	p = malloc((final - initial + 2) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i <= final - initial)
	{
		p[i] = s1[initial];
		i++;
		initial++;
	}
	p[i] = '\0';
	return (p);
}
