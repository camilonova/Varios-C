#include <stdio.h>

void convertToUppercase(char *);

main()
{
	char string[] = "characters";

	printf("The string before conversion is: %s\n", string);
	convertToUppercase(string);
	printf("The string after conversion is: %s\n", string);

	return 0;
}

void convertToUppercase(char *s)
{
	while(*s != '\0')
	{
		if(*s >= 'a' && *s <= 'z')
			*s -= 32;
		++s;
	}
}