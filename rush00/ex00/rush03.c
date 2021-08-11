void		ft_putchar(char c);

void	ft_print(int x, char izq, char med, char der)
{
	ft_putchar(izq);
	while (x > 2)
	{
		ft_putchar(med);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(der);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print(x, 'A', 'B', 'C');
		y--;
		while (y > 1)
		{
			ft_print(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
		{
			ft_print(x, 'A', 'B', 'C');
		}
	}
}
