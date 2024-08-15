/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-15 10:14:12 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-15 10:14:12 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_params(char *param)
{
	int	i;

	i = 0;
	while (param[i] != '\0')
	{
		write (1, &param[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int ac, char **av)
{
	ac -= 1;
	while (ac > 0)
	{
		ft_rev_params(av[ac]);
		ac--;
	}
	return (0);
}
