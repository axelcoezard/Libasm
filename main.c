#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>

size_t	ft_strlen(char* str);
size_t	ft_write(int fd, const char* buffer, size_t size);
char*	ft_strcpy(char* dest, char* src);

int main(int ac, char **av)
{
	(void) ac;

	errno = 0;
	// ==== TESTS de FT_STRLEN ====
	printf("Taille '%s': %d\n", "test", (int) ft_strlen("test"));

	// ==== TESTS de FT_WRITE ====
	char* msg = "test\n";
	ft_write(1, msg, ft_strlen(msg));

	// ==== TESTS de FT_STRCPY ====
	char* src = strdup("test\0");
	char* dest = strdup("hello\0");
	ft_strcpy(dest, src);
	ft_write(1, dest, ft_strlen(dest));
	return 0;
}
