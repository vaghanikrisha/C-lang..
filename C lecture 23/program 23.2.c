#include<stdio.h>
main()
{
	int A , B , C ;
	
	printf("Enter the value of A : ");
    scanf("%d", &A);
    printf("Enter the value of B : ");
    scanf("%d", &B);
    
    printf("-----------------------------\n");
    
    printf("Before swapping :\n");
    printf("A : %d\n", A);
    printf("B : %d\n", B);
    
    int *pointer1 , *pointer2;
    pointer1 = &A , pointer2 = &B;
    
    C = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = C;
    
    printf("-----------------------------\n");
    
    printf("After swapping :\n");
    printf("A : %d\n", A);
    printf("B : %d\n", B);
}
