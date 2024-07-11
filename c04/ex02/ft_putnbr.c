#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb ==-2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		write(1, "1", 1);
		write(1, "47483648", 8);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0)
        {
                write(1, "-", 1);
                ft_putnbr(-nb); 
        }
	else if (nb <= 9)
	{
		nb = nb + 48;
		write(1, &nb,1);
	}
}

int main(void)
{
	ft_putnbr(10);
}
