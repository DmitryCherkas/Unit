#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *temp1;
	const unsigned char *temp2;

	temp1 = s1;
	temp2 = s2;
	while (n)
	{
		if (*temp1 != *temp2)
			return(*temp1 - *temp2);
		n--;
		temp1++;
		temp2++;
	}
	return (0);
}
