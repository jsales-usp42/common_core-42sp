/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:51:32 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 12:51:43 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function that fills the first n characters with '\0'

/*#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char	s[100] = "jessica";

	ft_bzero(s, 4);
	printf("Minha função: %s\n", s);
	return (0);
}*/

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
