#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>

size_t	ft_strlen(char* str);
size_t	ft_write(int fd, const char* buffer, size_t size);
char*	ft_strcpy(char* dest, char* src);
int		ft_strcmp(const char* s1, const char* s2);

#define __RED		"\033[1;31m"
#define __GREEN		"\033[1;32m"
#define __YELLOW	"\033[1;33m"
#define __BLUE		"\033[1;36m"
#define __WHITE		"\033[1;37m"
#define __EOC		"\033[0;0m"

static void	log(char* text, char* color)
{
	printf("\n==== %s%s%s ====\n", color, text, __EOC);
}

int main(int ac, char **av)
{
	(void) ac;

	errno = 0;
	log("TEST DE FT_STRLEN", __BLUE);
	printf("ft_strlen('%s')=%d\n", "test", (int) ft_strlen("test"));
	printf("strlen('%s')=%d\n", "test", (int) strlen("test"));

	log("TEST DE FT_WRITE", __BLUE);
	char* msg = "test";
	printf("ft_write(%s)=\n", msg); ft_write(1, msg, strlen(msg)); puts("\n");
	printf("write(%s)=\n", msg); write(1, msg, strlen(msg)); puts("\n");

	log("TEST DE FT_STRCPY", __BLUE);
	char* src = strdup("test\0");
	char* dest = strdup("hello\0");
	printf("ft_strcpy(dest, '%s')=%s\n", src, ft_strcpy(dest, src));
	printf("strcpy(dest, '%s')=%s\n", src, strcpy(dest, src));

	log("TEST DE FT_STRCMP", __BLUE);
	free(dest);
	dest = strdup("hello\0");
	printf("ft_strcmp('%s', '%s')=%d\n", dest, src, ft_strcmp(dest, src));
	printf("strcmp('%s', '%s')=%d\n", dest, src, strcmp(dest, src));

	if (src)	free(src);
	if (dest)	free(dest);
	return 0;
}
