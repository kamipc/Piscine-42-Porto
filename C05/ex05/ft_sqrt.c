/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-14 16:34:46 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-14 16:34:46 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
	{
		return (1);
	}
	while (i < nb)
	{
		if ((nb / i == i) && (nb % i == 0))
			return (i);
		i++;
	}
	return (0);
}

/*int main()
{
	int n = 300;
	int n1 = 49;
	int rslt = ft_sqrt(n);
	printf("%d\n", rslt);
	rslt = ft_sqrt(n1);
	printf("%d", rslt);
}*/