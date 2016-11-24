#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main ()
{
	const char *src = "http://www.tutorialspoint.com";
	char dest[30];

	const char *src1 = "http://www.tutorialspoint.com";
	char try[30];

	printf("Before memcpy dest = %s\n", dest);
	memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);
	
	printf("Before memcpy dest = %s\n", try);
	ft_memcpy(try, src1, strlen(src1)+1);
	printf("After memcpy dest = %s\n", try);
	return(0);
}
