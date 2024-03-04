#include<stdio.h>
main(){
    //find the simple intrest

    int p;
    float r;
    int t;
    
	//principle of amount
    printf("enter the principle: ");
    scanf("%d",&p);
    
    //rate per year
    printf("enter the rate of principle: ");
    scanf("%f",&r);
    
	//time in years
    printf("enter the number of years: ");

    printf("The Simple Interest is : %f",(p*r*t)/100);
}
