/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:53:03 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 12:53:07 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function that returns the difference between the first 
// differing srings s1 and s2

/*#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char	*s1 = "sales";
	char	*s2 = "sales";
	int	n = 2;

	printf("Minha função %d\n", ft_memcmp(s1, s2, n));
	printf("Função orifinal: %d", memcmp(s1, s2, n));
	return (0);
}*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	size_t			i;

	i = 0;
	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	while (i < n || p_s1[i] != '\0' || p_s2[i] != '\0')
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		i++;
	}
	return (0);
}
