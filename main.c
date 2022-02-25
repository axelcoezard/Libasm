#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char* str);
size_t	ft_write(int fd, const char* buffer, size_t size);

int main(int ac, char **av)
{
	(void) ac;
	ft_write(1, av[1], ft_strlen(av[1]));
	return 0;
}
