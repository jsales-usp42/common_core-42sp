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

#include "./libft.h"

// Function that copies a given number of characters from the source string
// to the destination string and adds the null terminator at the end

/*#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, size_t n);

int	main(void)
{
	char	dest[100] = "sales";
	char	src[100] = "jessica";

	printf("Minha função: %s\n", ft_strncpy(dest, src, 5));
	printf("Função original: %s", strncpy(dest, src, 5));
	return (0);
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		lenght_src;

	lenght_src = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lenght_src);
}
