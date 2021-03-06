#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_var(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);

	if (a != '8') {
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb(void)
{
	char a;
	char b;
	char c;
	
	a = '0';
	while (a <= '6') 
	{
		b = a + 1;
		while (b <= '7') 
		{
			c = b + 1;
			while (c <= '8') 
			{
				ft_print_var(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main() {
	ft_print_comb();
	return (0);
}
