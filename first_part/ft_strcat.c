#include<stddef.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);

char *ft_strcat(char *dest, const char *src)
{
	size_t len;

	len = ft_strlen(dest);
	ft_strcpy((dest+len), src);
	return (dest);
}
