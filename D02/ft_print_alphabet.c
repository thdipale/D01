#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void alphabet()
{
	char c='a';
	while(c<='z')
	{
		ft_putchar(c);
		c++;
	}
}
int main()
	{
	alphabet();

return 0;
	}
