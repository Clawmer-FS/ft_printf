
#include "ft_printf.h"

void	ft_putstr(char *s, int *len)
{
	if (s == NULL)
		ft_putstr("(null)", len);
	while (s && *s)
	{
		ft_putchar(*s, len);
		s++;
	}
}