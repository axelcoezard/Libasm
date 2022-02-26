#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char* str);
size_t	ft_write(int fd, const char* buffer, size_t size);
char*	ft_strcpy(char* dest, char* src);

int main(int ac, char **av)
{
	(void) ac;

	// ==== TESTS de FT_STRLEN ====
	printf("Taille '%s': %d\n", "test", (int) ft_strlen("test"));

	// ==== TESTS de FT_WRITE ====
	char* msg = "test\n";
	ft_write(1, msg, ft_strlen(msg));

	// ==== TESTS de FT_STRCPY ====
	char* src = "test";
	char* dest = "hello";
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return 0;
}
