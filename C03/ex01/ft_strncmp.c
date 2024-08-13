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
	unsigned int	size;

	i = 0;
	if (n <= 0)
		return (0);
	while ((s1[i] == s2[i]) && i < n && s1[i] != '\0')
	{
		i++;
	}
	size = i;
	if (n - 1 < size)
		return (s1[i - 1] - s2[i - 1]);
	return (s1[i] - s2[i]);
}

/*int main()
{
    char str1[] = "32111";
	char str2[] = "";
	int	result = ft_strncmp(str1, str2, 1);
	printf("Result: %d\n", result);
    result = strncmp(str1, str2, 1);
    printf("Result: %d", result);
}*/