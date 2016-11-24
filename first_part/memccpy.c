#include <stdio.h>
#include <string.h>

char *msg = "This is the string: not copied";

void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memset(void *dest, int c, size_t len);

int main() 
{
	char buffer[80];
	char buffer1[80];
	memset( buffer, '\0', 80 );
	ft_memset( buffer1, '\0', 80 );
	memccpy( buffer, msg, '#', 10);
	ft_memccpy( buffer1, msg, '#', 10);
	printf( "%s\n", buffer);
	printf( "%s\n", buffer1);
	return (0);
}
