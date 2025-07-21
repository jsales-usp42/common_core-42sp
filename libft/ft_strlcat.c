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

// Function to concatenates one string to another according to the number of 
// characters from the second string passed as a parameter

#include <string.h>
#include <stdio.h>

char	*ft_strlcat(char *dest, const char *src, size_t size);
int		ft_strlen(const char *s);

int	main(void)
{
	char	dest[100] = "jessica";
	char	src[100] = "sales";

	printf("Minha função: %s\n", ft_strlcat(dest, src, 2));
//	printf("Função original: %s", strlcat(dest, src, 2));
	return (0);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		lengh_dest;

	lengh_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[lengh_dest + i] = src[i];
		i++;
	}
	dest[lengh_dest + i] = '\0';
	return (dest);
}
