/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:50:13 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 12:50:18 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function that replaces the first n characters of a string
// with the character passed as a parameter

/*#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	char	s[100] = "Jessica Sales";

	ft_memset(s, '#', 5);
	printf("Minha função: %s\n", s);
	printf("Função original: %s", s);
	return (0);
}*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
