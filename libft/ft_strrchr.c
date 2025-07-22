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
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
