/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-14 17:12:23 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-14 17:12:23 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_program_name(char *name)
{
	int	i;

	i = 0;
	while (name[i] != '\0')
	{
		write (1, &name[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int ac, char **av)
{
	while (ac > 0)
	{
		ac--;
	}
	ft_print_program_name(av[ac]);
	return (0);
}