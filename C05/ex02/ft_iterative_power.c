/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-14 13:30:23 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-14 13:30:23 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		n = n * nb;
		i++;
	}
	return (n);
}

/*int main()
{
	int nb = 8;
	int power = 4;
	int rslt = ft_iterative_power(nb, power);
	printf("Result: %d\n", rslt);
	return (0);
}*/