#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	/*if number is less than 0, put a negative sign and subtract the nb value from 0*/
	if (nb < 0)
	{
		ft_putchar('-');
		nb = 0 - nb;

	/*if the number is greater than or equal to 10, divide the number by 10 and write the remainder*/
	}
	if (nb >= 10)
	{
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);

	/*otherwise, print the number (0 + the number)*/
	}
	else 
		ft_putchar('0' + nb);
}

int main()
{
	ft_putnbr(6);
	return (0);
}
