/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:49:42 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 12:49:47 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function that checks if the parameter is printable

/*#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c);

int	main(void)
{
	printf("Minha função: %d\n", ft_isprint('\n'));
	printf("Função original: %d", isprint('\n'));
	return (0);
}*/

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (c);
}
