#include<stdio.h>

main(){
	
	int k,r,i,a;

printf("Enter number of units used: ");
scanf("%d",&k);
	if(k<=50)
	{
 		r=k*0.50;
	}
	else if(k<=150)
	{
  		r=25+((k-50)*0.75);
	}
	else if(k<=250)
	{
  		r=100+((k-150)*1.20);
	}
	else
	{
  		r=220+((k-250)*1.50);
	}
	i=r*0.20;
	a=r+i;
	printf("Total amount of electricity bill: Rs. %d",a);
}
