/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi-u <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 19:03:08 by prossi-u          #+#    #+#             */
/*   Updated: 2024/08/04 15:57:41 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	while (l <= x)
	{
		c = 1;
		while (c <= y)
		{
			if ((l == 1 && c == 1) || (l == x && c == y && y != 1 && x != 1))
				ft_putchar('A');
			else if ((l == 1 && c == y) || (l == x && c == 1))
				ft_putchar('C');
			else if (l > 1 && l < x && c > 1 && c < y)
				ft_putchar(' ');
			else
				ft_putchar('B');
			c++;
		}
		if (y > 0)
			ft_putchar('\n');
		l++;
	}
}
