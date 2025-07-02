#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print a string;
 * ft_putchar: print chars.
 * @ft_putchar: print chars.
 * @c: store chars.
 *
 * Return: 1.
 */
void ft_putchar(char *c)
{
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
}

int main(void)
{
	ft_putchar("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
