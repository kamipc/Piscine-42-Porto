/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-20 10:25:27 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-20 10:25:27 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*nbrs;

	i = 0;
	nbrs = (int *) malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
	{
		nbrs = NULL;
		return (0);
	}
	if (nbrs != NULL)
	{
		while (min < max)
		{
			nbrs[i] = min;
			min++;
			i++;
		}
		*range = nbrs;
		return (i);
	}
	else
		return (-1);
}

// int main()
// {
// 	int min = -20;
// 	int	max = 20;
// 	int *range;
// 	int n = ft_ultimate_range(&range, min, max);
// 	int i = 0;

// 	while (i < n)
// 	{
// 		printf("%d,", range[i]);
// 		i++;
// 	}
// 	free(range);
// 	return(0);
// }