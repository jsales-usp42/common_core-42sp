/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:16:38 by marvin            #+#    #+#             */
/*   Updated: 2025/07/08 17:16:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char letter;
    
    letter = 'a';
    while (letter <= 'z')
    {
        ft_putchar(letter);
        letter++;
    }
}

/*int main(void)
{
    ft_print_alphabet();
    return (0);
}*/