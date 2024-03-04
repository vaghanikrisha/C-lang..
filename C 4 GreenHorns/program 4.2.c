#include<stdio.h>

// Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
main()
{
    int b,hra,da,ta;
    printf("enter your base salary:-");
    scanf("%d",&b);
    
    printf("enter the hra :-");
    scanf("%d",&hra);
    
    printf("enter the da:-");
    scanf("%d",&da);
    
    printf("enter the ta:-");
    scanf("%d",&ta);

    b=b+(b*hra/100)+(b*da/100)+(b*ta/100);

    printf("the base salary is:- %d",b);
}
