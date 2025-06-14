#include <unistd.h>

void printer(char d1, char u1, char d2, char u2);
void ft_print_comb2(void)
{
	char	d1;
	char	u1;
	char	d2;
	char	u2;

	d1 = '0';
	u1 = '0';
	d2 = '0';
	u2 = '0';

	while (d1 <= '9')
	{
		while (u1 <= '9')
		{
			while (d2 <= '9')
			{
				while (u2 <= '9')
				{
					printer(d1,u1,d2,u2);
					u2++;
				}
				d2++;
				u2 = '0';
			}
			u1++;
			d2 = '0';
		}
		d1++;
		u1 = '0';
	}
}

void printer(char d1, char u1, char d2, char u2)
{
	int	left;
	int	right;

	left = 10 * (d1 - '0');
	left += u1 - '0';
	right = 10 * (d2 - '0');
	right += u2 - '0';
	if (right > left)
	{	
		write (1, &d1, 1);
		write (1, &u1, 1);
		write (1, " ", 1);
		write (1, &d2, 1);
		write (1, &u2, 1);
	if (!(left == 98 && right == 99))
	{
		write (1, ",", 1);
		write (1, " ", 1);
	}
	}

}
/*
int main(void)
{
	ft_print_comb2();
	return 0;
}
*/
