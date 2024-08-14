/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-14 12:44:13 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-14 12:44:13 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i <= nb)
	{
		n = n * i;
		i++;
	}
	return (n);
}

/*int	main()
{
	int	n;
	int	rslt;

	n = 1;
	rslt = ft_iterative_factorial(n);
	printf("Result: %d", rslt);
	return(0);
}*/