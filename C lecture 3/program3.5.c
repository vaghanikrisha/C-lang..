#include<stdio.h>
main()
{
   
    //radius
    int r;
    //perimeter
    float p;
    
    //find the perimeter of 
    printf("Enter the radius of the circle:");
    scanf("%d",&r);
    
    p=(2*3.1416)*r;
    
    printf("The Perimeter of the Circle is:%.2f :",p);
}
