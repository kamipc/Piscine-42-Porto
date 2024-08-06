/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-06 14:32:11 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-06 14:32:11 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
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
	int n = ft_str_is_alpha(str);
	printf("%d\n", n);
	n = ft_str_is_alpha(str2);
	printf("%d\n", n);
    n = ft_str_is_alpha(str3);
    printf("%d\n", n);
    n = ft_str_is_alpha(str4);
    printf("%d\n", n);
    n = ft_str_is_alpha(str5);
    printf("%d\n", n);
}*/