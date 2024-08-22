#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n = '0';
	int		i = 0;
	while (i++ <= 9)
	{
		write (1, &n, 1);
		n++;
	}
}