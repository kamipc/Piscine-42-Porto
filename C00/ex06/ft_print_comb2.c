/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-18 18:09:32 by user              #+#    #+#             */
/*   Updated: 2024-08-18 18:09:32 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar (char a)
{
	write (1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	i, j, k, l;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 0)
			{
				l = 0;
				while (l <= 0)
				{
					ft_putchar(i + '0');
					ft_putchar(j + '0');
					ft_putchar(' ');
					ft_putchar(k + '0');
					ft_putchar(l + '0');
					if (!(i == 9 && j == 9 && k == 9 && l == 9))
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb2();
	return;
}