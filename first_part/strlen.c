#include <stdio.h>
#include <string.h>

size_t  ft_strlen(const char *s);

int main ()
{
	char str[50];
	int len;
	int len2;

	strcpy(str, "");

	len = strlen(str);
	len2 = ft_strlen(str);
	printf("Length is %d\n", len);
	printf("Length is %d\n", len);

	return(0);
}
