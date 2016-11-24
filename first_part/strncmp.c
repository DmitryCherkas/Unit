#include <stdio.h>
#include <string.h>

int     ft_strncmp(const char *s1, const char *s2, size_t n);

int main ()
{
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "abcdef");
	strcpy(str2, "abc");

	ret = ft_strncmp(str1, str2, 3);

	if(ret < 0)
	{
		printf("str1 is less than str2");
	}
	else if(ret > 0) 
	{
		printf("str2 is less than str1");
	}
	else 
	{
		printf("str1 is equal to str2");
	}

	return(0);
}
