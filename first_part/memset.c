#include <stdio.h>
#include <string.h>

void *ft_memset(void *dest, int c, size_t len);

int main ()
{
	char str1[]="This is string.h library function";
	char str2[]="This is string.h library function";
	memset(str1, '1',10);
	ft_memset(str2, '1' ,10);
	puts(str1);
	puts(str2);
	return(0);
}
