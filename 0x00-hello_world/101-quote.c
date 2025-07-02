#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print a string;
 *
 * my_str: print chars.
 *
 * @my_str: print chars.
 *
 * @c: store chars.
 *
 * Return: 1.
 */
void my_str(char *c)
{
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
}

int main(void)
{
	my_str("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
