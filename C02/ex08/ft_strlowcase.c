/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-06 17:04:16 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-06 17:04:16 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

/*int main()
{ 
	char str[] = "What am I doing with my life";
	char *finalstr = ft_strlowcase(str);
	printf("%s", finalstr);
	return(0);
}*/