/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-06 11:04:54 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-06 11:04:54 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
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
	char	*ptrsrc = &src[0];
	char	*ptrdest = &dest[0];
	ft_strcpy(ptrdest, ptrsrc);
    printf ("%s", dest);
	return (0);
}*/