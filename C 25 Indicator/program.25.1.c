#include<stdio.h>
main()
{
	int length , *pointer ;
	char string[40];

	printf("=> Enter any string :");
	gets(string);

    length = strlen(string);
	pointer = &length;

	printf("=> Length of string : %d",*pointer);
}

