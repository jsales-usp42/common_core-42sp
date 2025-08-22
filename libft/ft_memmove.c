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

#include "libft.h"

static char	*if_dest_less_src(unsigned char *dest, unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return ((char *)dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_src;
	unsigned char	*p_dest;

	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	if (p_src == NULL && p_dest == NULL)
		return (NULL);
	if (p_dest == p_src || n == 0)
		return (dest);
	if (p_dest < p_src)
		if_dest_less_src(p_dest, p_src, n);
	else
	{
		i = n;
		while (i > 0)
		{
			p_dest[i - 1] = p_src[i - 1];
			i--;
		}
	}
	return (dest);
}
