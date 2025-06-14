/*
int main (void)
{
	char n;

	n = 'M';
	ft_putchar(n);
	return 0;
}
*/
void ft_putchar(char n)
{
	write(1, &n, 1);
}
