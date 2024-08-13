/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-12 14:25:47 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-12 14:25:47 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_getbaselength(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int		n;
	int				len;

	n = nbr;
	if (! check_base(base))
		return ;
	len = ft_getbaselength(base);
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= len)
	{
		ft_putnbr_base(n / len, base);
		ft_putnbr_base(n % len, base);
	}
	else
		ft_putchar(base[n]);
}
/*int main()
{
    long int nbr = -2147483648;
    char *bdec = "0123456789";
    char *bbin = "01";
    char *bhex = "0123456789ABCDEF";
    char *boct = "poneyvif";

	ft_putnbr_base(nbr, bdec);
	printf("\n");
	ft_putnbr_base(nbr, bbin);
	printf("\n");
	ft_putnbr_base(nbr, bhex);
	printf("\n");
	ft_putnbr_base(nbr, boct);
	printf("\n");
}*/