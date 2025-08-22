/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:24:34 by jsales-p          #+#    #+#             */
/*   Updated: 2025/08/21 16:45:56 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p_s;
	int		i;

	p_s = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (p_s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		p_s[i] = (*f)(i, s[i]);
		i++;
	}
	p_s[i] = '\0';
	return (p_s);
}
