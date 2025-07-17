/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:35:59 by jsales-p          #+#    #+#             */
/*   Updated: 2025/07/17 18:29:47 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	print_arg(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != (void *)0)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	char	*auxiliary;

	if (argc == 1)
		return (1);
	i = 1;
	j = 1;
	while (j <= argc)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) < 0)
			{
				auxiliary = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = auxiliary;
			}
			i++;
		}
		i = 0;
		j++;
	}
	print_arg(argv);
}
