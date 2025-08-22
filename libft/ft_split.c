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

#include "libft.h"

static int	count_strings(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			in_word = 0;
		else
		{	
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		i++;
	}
	return (count);
}

static int	skip_delims(char const *s, int i, char c)
{
	while (s[i] == c)
		i++;
	return (i);
}

static char	*copy_string(char const *s, int start, int end)
{
	char	*str;
	int		i;

	str = (char *)malloc((end - start + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

static void	*free_split(char **p, int filled)
{
	int	i;

	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < filled)
	{
		free(p[i]);
		i++;
	}
	free(p);
	return (NULL);
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
		i = skip_delims(s, i, c);
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		p[j++] = copy_string(s, start, i);
		if (p[j - 1] == NULL)
			return (free_split(p, j - 1));
	}
	p[j] = NULL;
	return (p);
}
