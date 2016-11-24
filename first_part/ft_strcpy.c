#include<stddef.h>

size_t	ft_strlen(const char *s);
void *ft_memcpy(void *dest, const void *src, size_t n);

char	*ft_strcpy(char *dest, const char *src)
{
	size_t len;

	len = ft_strlen(src) + 1;
	ft_memcpy(dest, src, len);
	return(dest);
}
