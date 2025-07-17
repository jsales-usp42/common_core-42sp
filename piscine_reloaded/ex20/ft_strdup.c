/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:42:17 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/17 14:48:04 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(sizeof(s));
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	if (p == NULL)
		return (NULL);
	return (p);
}

/*int	main(void)
{
	char	*str = "";

	printf("Resultado: %s\n", ft_strdup(str));
	printf("Original: %s", strdup(str));
	return (0);
}*/
