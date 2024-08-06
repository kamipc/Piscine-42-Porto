/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-06 16:31:10 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-06 16:31:10 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int main()
{
    char str[] = "helloworld";
    char str2[] = "HELLOWORLD";
    char str3[] = "H3ll0 W0rld!";
    char str4[] = "1234567";
    char str5[] = "";
	int n = ft_str_is_uppercase(str);
	printf("%d\n", n);
	n = ft_str_is_uppercase(str2);
	printf("%d\n", n);
    n = ft_str_is_uppercase(str3);
    printf("%d\n", n);
    n = ft_str_is_uppercase(str4);
    printf("%d\n", n);
    n = ft_str_is_uppercase(str5);
    printf("%d\n", n);
}*/