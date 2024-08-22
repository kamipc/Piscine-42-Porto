#include <stdio.h>

char    *ft_strrev(char *str)
{
	char temp;
	int i = 0;
	int j;

	while (str[i] != '\0')
		i++;
	j = i - 1;
	i = 0;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

int main()
{
	char s[] = "hello world";
	printf("%s", ft_strrev(s));
}