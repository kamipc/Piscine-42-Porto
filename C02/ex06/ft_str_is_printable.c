/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-06 16:35:43 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-06 16:35:43 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str[0])
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int main(int ac, char **av)
{
    if (ac < 2)
        return(0);
    for (int i = 1; i < ac; i++)
    {
        printf("%d\n", ft_str_is_printable(av[i]));
    }
    return(0);
}*/