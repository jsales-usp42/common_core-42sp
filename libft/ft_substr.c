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

#include "./libft.h"

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			size_s;
	char			*p;

	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		p = malloc(1);
		p[0] = '\0';
		return (p);
	}
	size_s = ft_strlen(s) - start;
	if (size_s > len)
		size_s = len;
	p = (char *)malloc((size_s + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (i < len + start && s[i] != '\0')
		p[j++] = s[i++];
	p[j] = '\0';
	return (p);
}
