#include <unistd.h>
void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	fword(char *s)
{
	int i = 0;
	int found = 0;
	if (s[0] == '\0')
	{
		ft_putchar('\n');
		return;
	}
	while (s[i] != '\0')
	{
		if (s[i] > 32 && s[1] < 127)
		{
			ft_putchar(s[i]);
			found = 1;
		}
		if (s[i] == ' ' && found == 1)
			break;
		i++; 
	}
	ft_putchar('\n');

}

int main(int ac, char **av)
{
	if (ac < 2 || ac > 2)
	{
		ft_putchar('\n');
		return (0);
	}
	fword(av[1]);
}