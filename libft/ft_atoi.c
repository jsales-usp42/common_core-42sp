/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:50:38 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 12:50:43 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function that transforms digit characters into numeric values
// in the string

/*#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr);

int	main(void)
{
	char	*nptr = "   a1234abc";

	printf("Minha função: %d\n", ft_atoi(nptr));
	printf("Função original: %d", atoi(nptr));
	return (0);
}*/

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while (nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		sum = (sum * 10) + (nptr[i] - '0');
		i++;
	}
	return (sign * sum);
}
