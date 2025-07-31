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

// Funtion that allocates memory according to the number of elements
// passed as a parameter

/*#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nelem, size_t elsize);

int	main(void)
{
	int	nelem = 4;
	char	*p1 = (char *)ft_calloc(nelem, sizeof(char));
	char	*p2 = (char *)calloc(nelem, sizeof(char));
	int	i = 0;

	while (i < nelem)
	{
		printf("Minha função: %s\n", p1);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < nelem)
	{
		printf("Função original: %s\n", p2);
		i++;
	}
	free(p1);
	free(p2);
	return (0);
}*/

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t			i;
	void			*p;
	unsigned char	*p_aux;

	p = malloc(nelem * elsize);
	if (p == NULL || nelem == 0 || elsize == 0)
		return (NULL);
	p_aux = (unsigned char *)p;
	i = 0;
	while (i < nelem * elsize)
	{
		p_aux[i] = 0;
		i++;
	}
	return (p);
}
