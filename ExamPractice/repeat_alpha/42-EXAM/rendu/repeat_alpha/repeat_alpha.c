#include <unistd.h>

void	print_alpha(char c)
{
	int i = 0;
	int repeat = 0;
	if (c >= 'a' && c <= 'z')
		repeat = c - 'a';
	else if (c >= 'A' && c <= 'Z')
		repeat = c - 'A';
	while (i <= repeat)
	{
		write (1, &c, 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			print_alpha(av[1][i]);
			i++;
		}
	}
	write (1, "\n", 1);
}