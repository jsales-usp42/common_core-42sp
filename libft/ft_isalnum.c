/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:46:33 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 12:46:39 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function that checks if the parameter is alphanumeric

/*#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	printf("Minha função: %d\n", ft_isalnum(4));
	printf("Função original: %d", isalnum(4));
	return (0);
}*/

int	ft_isalnum(int c)
{
	if (!((c >= 97 && c <= 122) || (c >= 65 && c <= 90)))
	{
		if (!(c >= 48 && c <= 57))
			return (0);
	}
	return (c);
}
