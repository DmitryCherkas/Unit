#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t n);

int main ()
{
	char str1[]= "To be or not to be";
	char str2[40];
	char str3[2];

	/* copy to sized buffer (overflow safe): */
	ft_strncpy ( str2, str1, sizeof(str2) );

	/* partial copy (only 5 chars): */
	ft_strncpy ( str3, str2, 5 );
	str3[5] = '\0';   /* null character manually added */

	puts (str1);
	puts (str2);
	puts (str3);

	return 0;
}
