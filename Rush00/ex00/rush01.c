/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi-u <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 19:03:08 by prossi-u          #+#    #+#             */
/*   Updated: 2024/08/04 17:33:29 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	while (l <= x)
	{
		c = 1;
		while (c <= y)
		{
			if ((l == 1 && c == 1) || (l == x && c == y && x != 1 && y != 1))
				ft_putchar('/');
			else if ((l == 1 && c == y) || (l == x && c == 1))
				ft_putchar('\\');
			else if (l > 1 && l < x && c > 1 && c < y)
				ft_putchar(' ');
			else
				ft_putchar('*');
			c++;
		}
		if (y > 0)
			ft_putchar('\n');
		l++;
	}
}
