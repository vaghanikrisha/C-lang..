#include<stdio.h>
main()
{
int i ,n ,ans;
int arr[n];

printf("Enter array size: ");
scanf("%d", &n);

for(i = 0; i < n; i++)
{
printf("arr[%d] : ",i);
scanf("%d",&arr[i]);
}

for(i = 0; i < n; i++)
{
printf("Square of element array : %d\n",arr[i] * arr[i]);
}
printf("\n");
}


