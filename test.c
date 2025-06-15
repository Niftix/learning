#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int n)
{
	char	temp;

	if(n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		temp = n + '0' ;
		write (1, &temp, 1); 
		return;
	}
	if (n > 10)
	{
		ft_putnbr(n/10);
                temp = n % 10 + '0';
                write (1, &temp, 1);
	}

}

int main(void)
{
	int	nb;
	scanf("%d", &nb);
	ft_putnbr(nb);
	return 0;
}
