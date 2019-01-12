#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_var(char a, char b)
{
	ft_putchar(a);
	ft_putchar(b);

	if (a != 1) {
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb2(void)
{
	char a;
	char b;

	a = '0';
	b = '0';

	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			ft_print_var(a, b);
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}
