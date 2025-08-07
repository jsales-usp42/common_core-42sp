/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:40:34 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/31 12:25:52 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function that ...

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char const *s, char c);

int		count_delimiter(char const *s, char c);

int	main(void)
{
	char	*s = "jessica sales pereira dos santos";
	char	c = ' ';
	char	**result;

	result = ft_split(s, c);
	for (int i = 0; result[i] != NULL; i++)
		printf("My function: %s\n", result[i]);
	for (int i = 0; result[i] != NULL; i++)
		free (result[i]);
	free (result);
	return (0);
}

int	count_delimiter(char const *s, char c)
{
	int	i;
	int	delimiter;

	i = 0;
	delimiter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			delimiter++;
		i++;
	}
	return (delimiter);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		j;
	int		k;
	int		start;

	p = (char **)malloc((count_delimiter(s, c) + 2) * sizeof(*p));
	if (p == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < count_delimiter(s, c) + 1)
	{
		start = k;
		while (s[k] != c && s[k] != '\0')
			k++;
		p[i] = (char *)malloc((k - start +1) * sizeof(char));
		if (p[i] == NULL)
			return (NULL);
		j = 0;
		while (j < k - start)
		{
			p[i][j] = s[start + j];
			j++;
		}
		p[i][j] = '\0';
		i++;
		if (s[k] == c)
			k++;
		if (s[k] == '\0')
			break ;
	}
	p[i] = NULL;
	return (p);
}
