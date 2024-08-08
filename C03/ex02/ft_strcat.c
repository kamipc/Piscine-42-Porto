/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-08 14:19:27 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-08 14:19:27 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char str1[] = "Help me";
	char str2[] = "Hello World";
	char str3[] = "Help me";
	char str4[] = "Hello World";
	char *result = ft_strcat(str2, str1);
	printf("Result: %s\n", result);
	result = strcat(str4, str3);
	printf("Result: %s", result);
}*/