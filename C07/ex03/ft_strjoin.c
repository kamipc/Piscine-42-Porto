/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-20 10:49:24 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-20 10:49:24 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_str_all_len(int size, char **strs, char *sep)
{
	int		i;
	int		sumstr;
	char	*allstrs;

	i = 0;
	sumstr = 0;
	if (size <= 0)
		sumstr = 1;
	else
	{
		while (i < size)
		{
			sumstr += ft_strlen(strs[i]);
			i++;
		}
		sumstr += (ft_strlen(sep) * (size - 1));
	}
	allstrs = (char *) malloc(sizeof(char) * sumstr + 1);
	return (allstrs);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		pos;
	char	*str;

	i = 0;
	pos = 0;
	str = ft_str_all_len(size, strs, sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[pos++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
		{
			str[pos++] = sep[j++];
		}
		i++;
	}
	str[pos] = '\0';
	return (str);
}

// int main()
// {
// 	char *strs[] = {"hello", "world", "!!!"};
// 	int size = 3;
// 	char *sep = "/ /";

// 	char *r = ft_strjoin(size, strs, sep);
// 	printf("%s", r);
// }