#include <unistd.h>
//funcao apenas para imprimir a string recebida 
void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
}

// se essa funcao fosse void ou seja nao retorna nenhum valor
void	ft_strcpy(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	//chama a funcao para imprimir e envia o s2 que e para onde foi
	//copiada a string
	//e nao precisa mais do return pois essa funcao ja nao retorna nenhum valor
	ft_putstr(s2);
}
int	main(int argc, char **argv)
{
	char	s2[]= "";

	if (argc == 2)
	{
		//no main passa apenas a executar a funcao que copia 
		ft_strcpy(argv[1], s2);
	}
	write(1, "\n", 1);
}
