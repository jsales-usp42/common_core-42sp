/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:09:04 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/21 17:21:36 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

// Function that points to the last character passed as a parameter

/*#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char	*s = "jessica";
	int	c = 's';

	printf("Minha função: %s\n", ft_strrchr(s, c));
	printf("Função original: %s", strrchr(s, c));
	return (0);
}*/

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	c_ascii;
	int				i;

	c_ascii = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c_ascii)
			return ((char *)&s[i]);
		i--;
	}
	if (c_ascii == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
