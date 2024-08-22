/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   again.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-17 16:38:05 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-17 16:38:05 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i, j;

	i = 0;
	if (ac < 2 || ac > 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (av[1][i] != '\0')
	{
		if (av[1][i] > 26 && av[1][i] < 127)
		{
			putchar(av[1][i]);
			if (av[1][i + 1] > 26 && av[1][i + 1] < 127)
			{
				j = 0;
				while (j < 3)
				{
					putchar(' ');
					j++;
				}
			}
		}
		i++;
	}
	return (0);
}