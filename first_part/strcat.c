/* strcat example */
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, const char *src);

int main ()
{
	char str[80];
	strcpy (str,"these ");
	ft_strcat (str,"strings ");
	ft_strcat (str,"are ");
	ft_strcat (str,"concatenated.");
	puts (str);
	return 0;
}
