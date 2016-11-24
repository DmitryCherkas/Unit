#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c);

int main ()
{
	char str[] = "Thi i a ample trin";
	char * pch;
	pch=ft_strrchr(str,'s');
	int a = pch-str+1;
	printf ("Last occurence of 's' found at %d \n",a);
	return 0;
}
