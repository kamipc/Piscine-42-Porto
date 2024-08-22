#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i = 0;
	int sign = 1;
	int n = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * sign);
}

int main()
{
	char *s = "  +--++-+1235465sde4650";
	int r = ft_atoi(s);
	printf("%d", r);
}