#include <stdio.h>
#include <string.h>

char *ft_strdup(const char *s);

int main(void)
{
	char *string = "this is a copy";
	char *newstr;
	if ((newstr = ft_strdup(string)) != NULL)
		printf("The new string is: %s\n", newstr);
	return 0;
}
