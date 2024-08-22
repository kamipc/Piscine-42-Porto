#include <unistd.h>

 int main()
{
	int	i = 1;
	char a = 'a';
	char b;

	while (a <= 'z')
	{
		if (i % 2 == 0)
		{
			b = a - 32;
			write (1, &b, 1);
		}
		else
			write (1, &a, 1);
		a++;
		i++;
	}
	write (1, "\n", 1);
}