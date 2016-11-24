#include<stddef.h>

size_t	ft_strlen(const char *s);

char *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t len = ft_strlen(dest);
	size_t i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
