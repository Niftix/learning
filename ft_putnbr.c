#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int n)
{
	char	temp;

	temp = '0';
        if (n % 10 == 0)
        {
		temp = '0';
        }
        if (n < 10 || n < 0)
        {
                write (1, &temp, 1);
                return;
        }
	temp += (n % 10);
	ft_putnbr(n/10);
        write (1, &temp, 1);

}

int main ()
{
	int	nb;
	scanf("%d", &nb);	
	ft_putnbr(nb);
	return 0;
}
