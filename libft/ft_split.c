/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:40:34 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 17:50:47 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function that ...

#include <stdio.h>
#include <stdio.h>

char	**ft_split(char const *s, char c);

int	main(void)
{
	char	*s = "jessica sales pereira dos santos";
	char	c = ' ';
	char	*result;

	result = ft_split(s, c);
	return (0);
}

int	count_spaces(char const *s, char c)
{
	int	i;
	int	spaces;

	i = 0;
	spaces = 0;
	while (s[i] != '\0')
	{


char	**ft_split(char const *s, char c)
{
	char	**p;


