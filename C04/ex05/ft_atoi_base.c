/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-13 17:28:08 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-13 17:28:08 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

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

int	checksign(char *str, int *i)
{
	int	sign;

	*i = 0;
	sign = 1;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
	{
		++*i;
	}
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int	ft_atoi(int i, char *str, char *base, int len)
{
	int	j;
	int	n;

	n = 0;
	while ((str[i] != '\0'))
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
			{
				n = n * len + j;
				break ;
			}
			j++;
		}
		if (j == len)
			return (0);
		i++;
	}
	return (n);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	sign;
	int	len;

	if (! check_base(base))
		return (0);
	len = ft_getbaselength(base);
	sign = checksign(str, &i);
	n = ft_atoi(i, str, base, len);
	return (sign * n);
}

/*int main()
{
    char *str = "ff";
    char *bdec = "0123456789";
    char *bbin = "01";
    char *bhex = "0123456789abcdef";
    char *boct = "poneyvif";
	long int rslt = ft_atoi_base(str, bhex);
	printf("%ld\n", rslt);
	rslt = ft_atoi_base(str, bbin);
	printf("%ld\n", rslt);
	rslt = ft_atoi_base(str, bdec);
	printf("%ld\n", rslt);
	rslt = ft_atoi_base(str, boct);
	printf("%ld\n", rslt);
}*/