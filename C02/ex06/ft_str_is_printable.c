/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-06 16:35:43 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-06 16:35:43 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
			i++;
		else
			return (1);
	}
	return (0);
}

/*int main()
{
    char str[] = "\0\n%d%s";
    char str2[] = "HELLOWORLD";
    char str3[] = "H3ll0 W0rld!";
    char str4[] = "1234567";
    char str5[] = "";
	int n = ft_str_is_printable(str);
	printf("%d\n", n);
	n = ft_str_is_printable(str2);
	printf("%d\n", n);
    n = ft_str_is_printable(str3);
    printf("%d\n", n);
    n = ft_str_is_printable(str4);
    printf("%d\n", n);
    n = ft_str_is_printable(str5);
    printf("%d\n", n);
}*/