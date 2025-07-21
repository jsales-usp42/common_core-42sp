/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:58:13 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/21 14:19:03 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function that counts the number of characters in a string excluding the
// null terminator

#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *s);

int	main(void)
{
	char	*str = "dlaskd012_###";
	printf("Minha função: %d\n", ft_strlen(str));
	printf("Função original: %ld", strlen(str));
	return (0);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
