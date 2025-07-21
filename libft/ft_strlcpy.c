/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:20:31 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/21 15:25:41 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, size_t n);

int	main(void)
{
	char	dest[100] = "sales";
	char	src[100] = "jessica";

	printf("Minha função: %s\n", ft_strncpy(dest, src, 10));
	printf("Função original: %s", strncpy(dest, src, 10));
	return (0);
}*/

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
