#include<stddef.h>

size_t	ft_strlen(const char *s);
void *ft_memcpy(void *dest, const void *src, size_t n);

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	ft_memcpy(dest, src, n);
	return(dest);
}
