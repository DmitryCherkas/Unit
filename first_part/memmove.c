#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n);

int main()
{
	char csrc[] = "1234567890";
	memmove(csrc+4, csrc+3, strlen(csrc)+1);
	printf("%s\n", csrc);

	char csrc1[] = "1234567890";
	ft_memmove(csrc1+4, csrc1+3, strlen(csrc1)+1);
	printf("%s\n", csrc1);

	return 0;
}
