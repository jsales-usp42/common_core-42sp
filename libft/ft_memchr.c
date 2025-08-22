/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:51:01 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 12:51:07 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	c_ascii;

	p = (unsigned char *)s;
	c_ascii = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == c_ascii)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
