#include <unistd.h>

void printer(char c, char d, char u);
void ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '1';
	u = '2';

	while (c <= '9')
	{
		while (d <= '9')
		{
			while (u <= '9')
			{	
				printer(c,d,u);
				u++;
			}
			d++;
			u = '0';
		}
		c++;
		d = '0';
	}
}

void printer(char c, char d, char u)
{
	if (c < d && d < u)
	{
		write (1, &c, 1);
		write (1, &d, 1);
		write (1, &u, 1);
		if (!(c == '7'&& d == '8' && u == '9'))
		{
			write (1, ",", 1);
			write (1, " ", 1);
		}
	}
}



int main(void)
{
	ft_print_comb();
	return 0;
}
