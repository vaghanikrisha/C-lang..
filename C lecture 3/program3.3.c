#include<stdio.h>
main()
{
	int base, height;
    //area of triangle

    printf("Enter the length of the base: ");
    scanf("%d", &base);
    printf("\nEnter the height of the triangle: ");
    scanf("%d", &height);
    
    float area = 0.5 * base * height;
    
	printf("\nThe area of the triangle is %.2f", area);
}
