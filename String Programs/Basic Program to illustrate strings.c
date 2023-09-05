// C program to illustrate strings

#include <stdio.h>
#include <string.h>

int main()
{
    printf("\n\n\t\t********************************************");
	/// declare and initialize string
	char str[] = "\n\n\t\t\tGeeks";

	/// print string
	printf("%s\n", str);

	int length = 0;
	length = strlen(str);

    printf("\n\t\t********************************************");

	/// displaying the length of string
	printf("\n\n\t\t\tLength of string %s is %d", str,length);

    printf("\n\n\t\t********************************************");

	return 0;
}
