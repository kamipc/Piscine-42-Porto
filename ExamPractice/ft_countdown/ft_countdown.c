#include <unistd.h>

int	main()
{
	char	n = '9';
	int		i = 9;
	while (i >= 0)
	{
		write (1, &n, 1);
		i--;
		n--;
	}
	return (0);
}