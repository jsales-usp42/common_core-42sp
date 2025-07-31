/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:53:33 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 12:53:38 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Functions that replaces the first n characteres from the
// source string to the destinarion string by copying the
// source into a temporary array for safety

/*#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char	src[] = "jessica";
	char	dest[] = "sales";
	int	n;

	n = 3;
	ft_memmove(dest, src, n);
	memmove(dest, src, n);
	printf("Minhação função: %s\n", dest);
	printf("Função original: %s", dest);
	return (0);
}*/

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_src;
	unsigned char	*p_dest;
	char			temporary[100];

	i = 0;
	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	while (p_src[i] != '\0')
	{
		temporary[i] = p_src[i];
		i++;
	}
	temporary[i] = '\0';
	i = 0;
	while (i < n)
	{
		p_dest[i] = temporary[i];
		i++;
	}
	return (dest);
}
