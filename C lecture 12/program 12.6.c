// Q.6 Write a Program to print the below pattern using nested for loop.
// 5 4 3 2 1
//   5 4 3 2
//     5 4 3
//       5 4
//         5

#include<stdio.h>
main(){
    int i,j,k;
    for(i=1;i<=5;i++)
	{
   	for(k=1;k<=i-1;k++)
	   {
   		printf(" ");
		}
        for(j=5;j>=i;j--)
		{
            printf("%d",j);
        }
        printf("\n");
    }
}
