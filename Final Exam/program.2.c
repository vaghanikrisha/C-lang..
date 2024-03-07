#include<stdio.h>
main()
{
	const float PI=3.14;
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
	printf("The area of the circle is: %.2f \n",PI*radius*radius);
    
    printf("The circumference of the circle is: %.2f\n",2 * PI * radius);

}
