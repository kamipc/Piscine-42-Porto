/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-05 12:36:58 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-05 12:36:58 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int save_n;
	int *ptr1;
	int *ptr2;
	int i;
	int j;

	i = 0;
	j = size - 1;
	ptr1 = &tab[i];
	ptr2 = &tab[j];
	while (i < size)
	{
		save_n = ptr1[i];
		ptr1[i] = ptr2[j];
		ptr2[j] = save_n;
		i++;
		j--;
	}
}

int main()
{
	int numbers[] = {10, 5, 75, 220, 2};
	int *ptrnbr = &numbers[0];
	int	i;
	for (i = 0; i < 5; i++)
	{
		printf("%d, ", numbers[i]);
	}
	printf("\n");

	ft_rev_int_tab(ptrnbr, 5);
	for (i = 0; i < 5; i++)
	{
		printf("%d, ", numbers[i]);
	}
}