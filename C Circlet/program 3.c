//Q.3 Write a Program to print the below pattern using nested for loop.
//1                 1
//1 2             2 1
//1 2 3         3 2 1
//1 2 3 4     4 3 2 1
//1 2 3 4 5 5 4 3 2 1

#include<stdio.h>
main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		for(k=4;k>=i;k--){
			printf("    ");
		}
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}
