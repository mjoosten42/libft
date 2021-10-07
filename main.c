#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	**strs;

	strs = ft_split("", ' ');
	while (*strs)
		printf("%s\n", *(strs++));
}
