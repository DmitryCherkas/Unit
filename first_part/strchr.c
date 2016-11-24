#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c);

int main ()
{
	char str[] = "This is a sample string";
	char * pch;
	printf ("Looking for the 's' character in \"%s\"...\n",str);
	pch=ft_strchr(str,'s');
	int a;
	while (pch!=NULL)
	{
		a = pch-str+1;
		printf ("found at %d\n",a);
		pch=ft_strchr(pch+1,'s');
	}
	return 0;
}
