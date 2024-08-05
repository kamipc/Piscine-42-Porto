/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:14:38 by cpinho-c          #+#    #+#             */
/*   Updated: 2024/08/04 17:49:22 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

void	ft_swap(int *a, int*b)
{
	int	save_a;
	int	save_b;

	save_a = *a;
	save_b = *b;
	*a = save_b;
	*b = save_a;
}

/*int main()
{
	int	a;
	int	b;

	a = 5;
	b = 2;

	int	*ptra = &a;
	int	*ptrb = &b;

	ft_swap(ptra, ptrb);
	printf("a: %d, b: %d",a , b);
	return(0);
}*/
