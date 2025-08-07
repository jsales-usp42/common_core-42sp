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

#include "./libft.h"

// Function that ...

/*#include <stdlib.h>
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
}*/

int	count_strings(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	*copy_string(char const *s, int start, int end)
{
	char	*str;
	int		i;

	str = (char *)malloc((end - start + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		j;
	int		start;

	p = (char **)malloc((count_strings(s, c) + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		p[j++] = copy_string(s, start, i);
	}
	p[j] = NULL;
	return (p);
}
