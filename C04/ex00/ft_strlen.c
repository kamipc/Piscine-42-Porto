/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-10 12:16:28 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-10 12:16:28 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

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

/*int main()
{
	char *str = "hello world! its me.";
	int rslt = ft_strlen(&str[0]);
	printf("%d\n", rslt);
	rslt = strlen(&str[0]);
	printf("%d", rslt);
	return(0);
}*/
