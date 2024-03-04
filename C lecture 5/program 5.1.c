//Write programme to find maxium and minimum in 3 number  
#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter the number a: ");
	scanf("%d",&a);
	
	printf("Enter the number b: ");
	scanf("%d",&b);
	
	printf("Enter the number c: ");
	scanf("%d",&c);
	
	//maximum number
	
	if(a>b){
		if(a>c){
			printf("\na is maxium number");
		}
		else{
			printf("\nc is maxium number");
		}
		
	}
	else{
		if(b>c){
			printf("\nb is maxium number");
		}
		else{
			printf("\nc is maxium number");
		}
	}
	
	//minimum number
	
	if(a<b){
		if(a<c){
			printf("\na is minimum number");
		}
		else{
			printf("\nc is minimum number");
		}
		
	}
	else{
		if(b<c){
			printf("\nb is minimum number");
		}
		else{
			printf("\nc is minimum number");
		}
	}
	
	
}
