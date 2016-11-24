#include<stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *src;

	src = s;
	
	while (n)
	{
		if(*src == (unsigned char)c)
			return ((void*)src);
		*src++;
		n--;
	}
	return (NULL);

}
