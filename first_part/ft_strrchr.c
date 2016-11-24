#include<stddef.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

char *ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s) - 1;
	printf ("%d \n",len);
	while (len >= 0)
	{
		printf ("%d \n",len);
		if(s[len] == (char)c)
			return((char *)s+len);
		len--;
	}
	return (NULL);
}
