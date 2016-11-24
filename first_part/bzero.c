#include <stdio.h>
#include <string.h>

void *ft_bzero(void *dest, size_t len);

int main ()
{
	char str1[]="This is string.h library function";
	char str2[]="This is string.h library function";
	bzero(str1, 0);
	ft_bzero(str2, 1);
	puts(str1);
	puts(str2);
	return(0);
}
