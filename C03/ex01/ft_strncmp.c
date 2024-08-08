/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-08 13:30:04 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-08 13:30:04 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main()
{
    char str1[] = "Hello World";
	char str2[] = "Help me";
	int	result = ft_strncmp(str1, str2, 4);
	printf("Result: %d\n", result);
    result = strncmp(str1, str2, 4);
    printf("Result: %d", result);
}*/