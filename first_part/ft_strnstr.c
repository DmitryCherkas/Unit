#include<stddef.h>

size_t	ft_strlen(const char *s);

char *ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	if (!(size = ft_strlen(to_find)))
		return (str);
	while (i < len)
	{
		while (str[i + j] == to_find[j])
		{
			if (j == size - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
