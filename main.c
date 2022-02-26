#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char* str);
size_t	ft_write(int fd, const char* buffer, size_t size);
char*	ft_strcpy(char* dest, char* src);

int main(int ac, char **av)
{
	(void) ac;
	ft_write(1, av[1], ft_strlen(av[1]));
	char* src = "test";
	char* dest = "hello";
	dest = ft_strcpy(dest, src);
	printf("%s", dest);
	return 0;
}
