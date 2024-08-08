/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-08 15:43:29 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-08 15:43:29 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && to_find [j] != '\0')
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
		}
		else
			i++;
	}
	i -= j;
	return (&str[i]);
}

/*int main()
{
	char str1[] = "help me";
	char str2[] = "Hello World! It's me, help me... end this";
	char str3[] = "help me";
	char str4[] = "Hello World! It's me, help me... end this";
	char *result = ft_strstr(str2, str1);
	printf("Result: %s\n", result);
	result = strstr(str4, str3);
	printf("Result: %s", result);
}*/