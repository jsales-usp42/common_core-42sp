/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:47:03 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 12:47:10 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function that checks if the parameter is a character ASCII

/*#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	printf("Minha função: %d\n", ft_isascii('a'));
	printf("Função original: %d", isascii('a'));
	return (0);
}*/

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (c);
}
