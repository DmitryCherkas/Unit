#include<stddef.h>
void *ft_memalloc(size_t size);
size_t	ft_strlen(const char *s);
void *ft_memcpy(void *dest, const void *src, size_t n);

char *ft_strdup(const char *s)
{
	char *new;
	size_t len;
	
	len = ft_strlen(s) + 1;
	if (!(new = ft_memalloc(len)))
		return (NULL);
	ft_memcpy(new,s,len);
	return(new);
}
