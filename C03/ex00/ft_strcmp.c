/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-08 09:57:07 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-08 09:57:07 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main()
{
	char str1[] = "Hello_World";
	char str2[] = "Hello";
	int	result = ft_strcmp(str1, str2);
	printf ("Result: %d\n", result);
    result = strcmp(str1, str2);
    printf ("Result: %d\n", result);
}*/