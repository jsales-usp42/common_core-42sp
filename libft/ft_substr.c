/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:38:35 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 16:38:42 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*start_more_sizes(void)
{
	char	*p;

	p = malloc(1);
	p[0] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size_s;
	char	*p;

	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (start_more_sizes());
	size_s = ft_strlen(s) - start;
	if (size_s > len)
		size_s = len;
	p = (char *)malloc((size_s + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (i < len + start && s[i] != '\0')
	{
		p[j] = s[i];
		j++;
		i++;
	}
	p[j] = '\0';
	return (p);
}
