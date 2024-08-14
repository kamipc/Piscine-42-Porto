/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-08 17:50:09 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-08 17:50:09 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[s] != '\0')
	{
		s++;
	}
	while (src[j] != '\0')
	{
		if (i < size - 1)
			dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}

/*int main() 
{
	char str1[9] = "aa";
	char str2[26] = "";
	char str3[9] = "aa";
	char str4[26] = "";
	unsigned int result = ft_strlcat(str2, str1, 4);
    printf("%d\n%s\n", result, str2);
	result = strlcat(str4, str3, 4);
	printf("%d\n%s\n", result, str4);
    return 0;
}*/