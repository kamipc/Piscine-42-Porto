/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-12 12:52:28 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-08-12 12:52:28 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		if (((str[i - 1] >= 32 && str[i - 1] <= 47) || (str[i - 1] >= 58 && str[i - 1] <= 64)
			||  (str[i - 1] >= 92 && str[i - 1] <= 96) || (str[i - 1] >= 123 && str[i - 1] <= 126))
				&& (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
		i++;

	}
	return(str);
}

/*int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", str);
	ft_strcapitalize(&str[0]);
	printf("%s", str);
}*/