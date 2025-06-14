#include <unistd.h>

void ft_print_numbers(void)
{
	char	nb;
	int	i;

	nb = '0';
	for (i = 0; i < 10; i++)
	{
		write (1, &nb, 1);
		nb++;
	}
}
/*
int main()
{
	ft_print_numbers();
	return 0;
}
*/
