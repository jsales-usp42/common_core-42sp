/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:26:24 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/21 16:03:12 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

// Function to concatenates one string to another according to the number of 
// characters from the second string passed as a parameter

/*#include <string.h>
#include <stdio.h>

char	*ft_strlcat(char *dest, const char *src, size_t size);

int	main(void)
{
	char	dest[100] = "jessica";
	char	src[100] = "sales";

//	printf("Minha função: %s\n", ft_strlcat(dest, src, 2));
	printf("Função original: %s", strlcat(dest, src, 2));
	return (0);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		lenght_dst;
	int		lenght_src;

	lenght_dst = ft_strlen(dst);
	lenght_src = ft_strlen(src);
	if (size == 0)
		return (lenght_src);
	if (size <= (size_t)lenght_dst)
		return (size + lenght_src);
	i = 0;
	while (src[i] != '\0' && i < size - lenght_dst - 1)
	{
		dst[lenght_dst + i] = src[i];
		i++;
	}
	dst[lenght_dst + i] = '\0';
	return (lenght_dst + lenght_src);
}
