#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n);

int main ()
{
	const char str[] = "http://www.tutorialspoint.com";
	char *ret;
	char *ret1;

	ret = memchr(str,'-', strlen(str));
	printf("String after is - %s\n", ret);
	ret1 = memchr(str,'-', strlen(str));
	printf("String after is - %s\n", ret1);

	return(0);
}
