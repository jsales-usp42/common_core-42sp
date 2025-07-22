/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:03:58 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/21 16:29:01 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function that compares two strings according to the number of characters 
// passed as a parameter and returns the difference between their characters 
// in the ASCII table

/*#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	char	*s1 = "jessica";
	char	*s2 = "je9sica";

	printf("Minha função: %d\n", ft_strncmp(s1, s2, 6));
	printf("Função original: %d", strncmp(s1, s2, 6));
	return (0);
}*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
