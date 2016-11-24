#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int main ()
{
	char str1[15];
	char str2[15];
	int ret;


	strcpy(str1, "9");
	strcpy(str2, "0aBCDEF");

	ret = ft_strcmp(str1, str2);

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
