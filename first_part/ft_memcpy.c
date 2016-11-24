#include<stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *temp_dest;
	const unsigned char *temp_src;
	
	temp_dest = dest;
	temp_src = src;
	while(n)
	{
		*temp_dest = *temp_src;
		temp_dest++;
		temp_src++;
		n--;
	}
	return (dest);
}
