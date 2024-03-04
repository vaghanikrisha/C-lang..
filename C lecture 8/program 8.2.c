#include <stdio.h>
main(){
	int i,n,sub=0;
	
	printf("enter your starting number :");
	scanf("%d",&i);
	printf("enter your ending number :");
	scanf("%d",&n);
	
	while(i>=n)
	{
		printf("%d\n",i);

		sub=sub-(i-2);
		i--;
	}
	printf("ans = %d",sub);
}

