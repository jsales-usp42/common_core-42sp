/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:49:11 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/17 15:33:52 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*integers;
	int	amplitude;
	int	x;
	int	i;

	i = 0;
	amplitude = max - min;
	integers = (int *)malloc(amplitude * sizeof(int));
	x = min;
	if (min >= max)
		return (NULL);
	while (x < max)
	{
		integers[i] = x;
		i++;
		x++;
	}
	return (integers);
}

int	main(void)
{
	int	min = 10;
	int	max = 1;
	int	i;
	int	*result = ft_range(min, max);

	i = 0;
	while (i != (max - min))
	{
		printf("%d", result[i]);
		i++;
	}
	return (0);
}
