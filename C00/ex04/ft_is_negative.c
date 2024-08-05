/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:10:27 by cpinho-c          #+#    #+#             */
/*   Updated: 2024/08/01 17:41:05 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'N';
	b = 'P';
	if (n >= 0)
	{
		write(1, &b, 1);
	}
	else
	{
		write(1, &a, 1);
	}
}

/*int main()
{
	ft_is_negative(2);
	return(0);
}*/
