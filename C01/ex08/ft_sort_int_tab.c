/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-18 19:05:34 by user              #+#    #+#             */
/*   Updated: 2024-08-18 19:05:34 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_len(char	*tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		i++;
	}
	return(i);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i, j, temp;

	i = 0;
	while (tab[i] < size)
	{
		j = i + 1;
		while (tab[j] < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 1;

	if (ac < 2)
		return;
	while (i < ac)
	{
		ft_sort_int_tab(atoi(av[i]), find_len(av[i]));
		i++;
	}
}
