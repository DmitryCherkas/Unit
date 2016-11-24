/* strncat example */
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, const char *src, size_t n);

int main ()
{
	char str1[20];
	char str2[20];
	strcpy (str1,"To be ");
	strcpy (str2,"or not to be");
	ft_strncat (str1, str2, 6);
	puts (str1);
	return 0;
}
