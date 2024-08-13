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
	if (to_find[0] == '\0')
	{
		return (&str[i]);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	char str1[] = "heasdasda";
	char str2[] = "";
	char str3[] = "adasda";
	char str4[] = "";
	char *result = ft_strstr(str2, str1);
	printf("Result: %s\n", result);
	result = strstr(str4, str3);
	printf("Result: %s", result);
}*/