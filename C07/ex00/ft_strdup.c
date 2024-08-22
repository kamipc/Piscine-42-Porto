/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-17 17:37:49 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-17 17:37:49 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *) malloc(sizeof(char) * (len + 1));
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
		return(0);
	while (i < ac)
	{
		char *dest = ft_strdup(av[i]);
		printf("%s\n", dest);
		dest = strdup(av[i]);
		printf("%s", dest);
		i++;
		free(dest);
	}
	return(0);
}*/