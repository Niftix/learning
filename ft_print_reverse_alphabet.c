#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char start;
	int	i;

	start = 'z';
	for (i = 0; i < 26; i++)
	{
		write (1, &start, 1);
		start--;
	}
}
/*
int main (void)
{
	ft_print_reverse_alphabet();
	return 0;
}*/
