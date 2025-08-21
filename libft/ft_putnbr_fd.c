/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:45:14 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 16:45:24 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	number;
	int		div;

	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	div = 1;
	if (n == 0)
		return (ft_putchar_fd('0', fd));
	while (n / div >= 10)
		div *= 10;
	while (div > 0)
	{
		number = n / div + '0';
		ft_putchar_fd(number, fd);
		n %= div;
		div /= 10;
	}
}
