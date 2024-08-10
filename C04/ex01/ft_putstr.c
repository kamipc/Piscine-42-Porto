/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-10 12:25:03 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-10 12:25:03 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	if (str[0] != '\0')
		write (1, &"\n", 1);
}

/*int main()
{
    char *str = "aaaaa";
    ft_putstr(&str[0]);
    return(0);
}*/