#include <stdio.h>
main() 
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if2(year % 4 == 0)
	{
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}

