/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:18:03 by cpinho-c          #+#    #+#             */
/*   Updated: 2024/08/04 18:40:13 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int	div;
	int	mod;
	int	*ptrdiv = &div;
	int	*ptrmod = &mod;

	ft_div_mod(15, 2, ptrdiv, ptrmod);
	printf("div: %d, mod: %d", *ptrdiv, *ptrmod);
	return(0);
}*/