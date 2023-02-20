#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	if ( n < 0 )
	{
		write(STDOUT_FILENO, "N\n",2);
	}
	else
	{
		write(STDOUT_FILENO, "P\n", 2);
	}
}
