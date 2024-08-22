/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-17 15:34:50 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-17 15:34:50 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_string(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_interval(char *str)
{
	char	temp[] = "";
	char	*src = str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while(src[i] != '\0')
	{
		if(src[i] > 26 && src[i] < 127)
		{
			temp[j] = src[i];
			k = 0;
			if(src[i + 1] != ' ' || src[i + 1] != '\0')
			{
				j++;
				while (k < 3)
				{
					temp[j] = ' ';
					j++;
					k++;
				}
			}
		}
		i++;
	}
	ft_string(temp);
}

int	main(int argc, char **argv)
{
	if(argc < 2 || argc > 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_interval(argv[1]);
	return (0);
}