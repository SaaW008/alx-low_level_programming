#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char *str = "Saad";
	int i;
	int ln = strlen(str);
	
	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
	for (i = 0; i <= ln; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
