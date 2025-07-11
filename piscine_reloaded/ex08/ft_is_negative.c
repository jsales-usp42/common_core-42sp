/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:15:16 by marvin            #+#    #+#             */
/*   Updated: 2025/07/10 21:15:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_is_negative(int n)
{
    if (n >= 0)
        ft_putchar('P');
    else
        ft_putchar('N');
}

/*int main(void)
{
    ft_is_negative(-1);
    ft_is_negative(0);
    ft_is_negative(1);
    return (0);
}*/