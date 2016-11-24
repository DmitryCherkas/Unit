#include<stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	d = dest;
	s = src;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
		return (ft_memcpy(d, s, n));
	s += n;
	d += n;
	while (n--)
		*--d = *--s;
	return (dest);
}
