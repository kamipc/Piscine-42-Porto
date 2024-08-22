/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-19 15:27:07 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-19 15:27:07 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*nbrs;
	int	i;

	i = 0;
	nbrs = (int *) malloc (sizeof(int) * ((max - min) + 1));
	if (min >= max)
	{
		nbrs = NULL;
		return (0);
	}
	while (min < max)
	{
		nbrs[i] = min;
		i++;
		min++;
	}
	return (nbrs);
}

// int main()
// {
// 	int min = -20;
// 	int	max = 20;
// 	int *nbrs = ft_range(min, max);
// 	int size = max - min;
// 	int i = 0;

// 	while (i < size)
// 	{
// 		printf("%d,", nbrs[i]);
// 		i++;
// 	}
// 	free(nbrs);
// 	return(0);
// }