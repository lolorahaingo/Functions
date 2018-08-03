#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int power_to(int nb, int power)
{
        int tmp;
        int result;

        tmp = nb;
        result = 1;
        while (power > 0)
        {
                result *= tmp;
                power--;
        }
        return (result);
}

int find_max(int n)
{
	int quotient;
	int mul;
	int i;
	int nb;

	quotient = power_to(10, n - 1);
	mul = 9;
	i = -1;
	nb = 0;
	while (++i < n - 1)
		mul--;
	i = -1;
	while (++i < n)
        {
                nb += quotient * mul;
                mul++;
                quotient /= 10;
        }
	return (nb);
}

int *stock_in_tab(int nb, int n)
{
	int *tab_return;
	int div;
	int i;

	div = power_to(10, n - 1);
	i = 0;
	tab_return = (int *)malloc(sizeof(int) * n);
	while (i < n)
	{
		tab_return[i] =	(nb / div) % 10;
		div /= 10;
		i++;
	}
	return (tab_return);
}

void print_abc(int *tab, int n, int nb)
{
	int i;
	int a;
	int max;

	i = -1;
	a = 0;
	max = find_max(n);
	while (++i < n)
	{
		while (++a < n - i)
			if (tab[i + a] <= tab[i])
				return ;
		a = 0;
	}
	i = -1;
	while (++i < n)
		ft_putchar(tab[i] + '0');
	if (nb != max)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb(int n)
{
	int nb;
	int *tab;
	int max;

	nb = 0;
	tab = (int *)malloc(sizeof(int) * n);
	max = find_max(n);
	while (nb <= max)
	{
		tab = stock_in_tab(nb, n);
		print_abc(tab, n, nb);
		nb++;
	}
}

int main (int argc, char **argv)
{
	int n;

	if (argc != 2) return (0);
	n = atoi(argv[1]);
	ft_print_comb(n);
	return (0);
}
