#include <unistd.h>

char *ft_rev_print (char *str)
{
	int i = 0;
	while (str[i])
		i++;
	i -= 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write (1, "\n", 1);
	return (str);
}

// int main()
// {
// 	char *s = "hello world";
// 	ft_rev_print(s);
// }
