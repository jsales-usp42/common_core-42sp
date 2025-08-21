/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:41:10 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 16:41:22 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	size_string(int n)
{
	int	size;

	if (n == 0)
		return (2);
	if (n == -2147483648)
		return (12);
	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size + 1);
}

char	*if_zero(char *str)
{
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

int	if_negative(int n, int *is_negative)
{
	unsigned int	num;

	*is_negative = -1;
	if (n == -2147483648)
		num = 2147483648;
	else
		num = (unsigned int)(-n);
	return (num);
}

char	*ft_itoa(int n)
{
	char	*str;
	unsigned int	num;
	int	i;
	int	is_negative;

	i = size_string(n) - 1;
	is_negative = 0;
	str = malloc(size_string(n) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
		return (if_zero(str));
	if (n < 0)
		num = if_negative(n, &is_negative);
	else
		num = (unsigned int)n;
	while (num > 0)
	{
		str[i--] = (num % 10) + '0';
		num /= 10;
	}
	if (is_negative)
		str[i] = '-';
	return (str);
}
