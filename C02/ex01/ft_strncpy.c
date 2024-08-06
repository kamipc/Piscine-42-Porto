/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-06 13:49:30 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-06 13:49:30 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char	src[] = "Hello World";
    printf ("%s\n", src);
	char	dest[11];
    int n = 7;
	char	*ptrsrc = &src[0];
	char	*ptrdest = &dest[0];
	ft_strncpy(ptrdest, ptrsrc, n);
    printf ("%s", dest);
	return (0);
}*/