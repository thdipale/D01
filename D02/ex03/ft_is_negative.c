#include <unistd.h>
void ft_putchar(int c)
{
	write(1,&c,1);
}
void ft_is_negative()
{
	int num='0';
	if (num<0)
		ft_putchar('N');
	else 
		ft_putchar('P');
}
int main()
{
	ft_is_negative(2);
}

