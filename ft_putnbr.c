#include <unistd.h>

void ft_putnbr(int n)
{
	int	save;
	int	i;
	char	printer;

	save = 0;
	i = 0;
	while(n > 10)
	{
		save += (n % 10);
		n /= 10;
		save *= 10;	
		i++;
	}
	save += (n % 10);
	i++;
	while (i > 0)
	{
		printer = (save % 10) + '0';
		write (1, &printer, 1);
		save /= 10;
		i--;
	}
}
/*
int main ()
{
	int	nb;

	scanf("%d", &nb);	
	ft_putnbr(nb);
	return 0;
}*/
