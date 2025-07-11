/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:55:43 by marvin            #+#    #+#             */
/*   Updated: 2025/07/10 20:55:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    char    number;

    number = '0';
    while (number <= '9')
    {
        ft_putchar(number);
        number++;
    }
}

/*int main(void)
{
    ft_print_numbers();
    return (0);
}*/