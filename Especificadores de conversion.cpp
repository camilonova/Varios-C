#include <stdio.h>

main()
{
	int *ptr;
	int x = 12345, y;

	ptr = &x;
	printf("The value of pointer is %p\n", ptr);
	printf("The address of x is %p\n\n", &x);

	printf("Total characters printed on this line is:%n", &y);
	printf(" %d\n\n", y);

	y = printf("This line has 28 characters\n");
	printf("%d characters were printed\n\n", y);

	printf("Printing a %% in format control string\n");

	return 0;
}