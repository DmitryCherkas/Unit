#include<stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *tmp_dest;
	const unsigned char *tmp_src;

	tmp_dest = dest;
	tmp_src = src;
	while (n)
	{
		*tmp_dest = *tmp_src;
		*tmp_dest++;
		*tmp_src++;
		n--;
		if (*tmp_dest == (unsigned char)c)
			return((void *)tmp_dest);
	}
	return (NULL);
}
