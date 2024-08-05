/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-05 09:43:38 by cpinho-c          #+#    #+#             */
/*   Updated: 2024/08/05 11:09:24 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/*int main()
{
    int a;
    int b;

    a = 15;
    b = 2;

    int *ptra = &a;
    int *ptrb = &b;

    ft_ultimate_div_mod(ptra, ptrb);
    printf("a: %d, b: %d", *ptra, *ptrb);
    return(0);
}*/
