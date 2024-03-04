#include<stdio.h>
main()
{
	int i, size , a ;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size]; 

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    int *pointer;
    pointer=&array;
    
    printf("Square of each element:\n");
    
    for (i = 0; i < size; i++) 
	{
		printf("%d\n",*(pointer+i)*(*(pointer+i)));
		
    }
	
}
