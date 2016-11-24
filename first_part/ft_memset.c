#include<stddef.h>

void *ft_memset(void *dest, int c, size_t len)
{
	unsigned char *temp;
	
	temp = dest;
	while (len)
	{
		*temp = (unsigned char)c;
		*temp++;
		len--;
	}
	return(dest);
}
