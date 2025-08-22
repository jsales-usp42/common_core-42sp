/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:52:30 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/26 12:52:35 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*p;

	if (nelem == 0 || elsize == 0)
		return (ft_strdup(""));
	if (nelem > ((size_t) -1 / elsize))
		return (NULL);
	p = (void *)malloc(nelem * elsize);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nelem * elsize);
	return (p);
}
