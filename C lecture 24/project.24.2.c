#include<stdio.h>
main()
{
	int size , a;

		printf("Enter Your Size for Array :- ");
		scanf("%d" , &size);

	int Array[size];

		for(a = 0 ; a < size ; a++ )
		{
			printf("Array[%d] = ",a);
			scanf("%d", &Array[a]);
		}

		for(a = 0 ; a < size / 2 ; a++ )
		{
			int chain = Array[a];
			Array[a] = Array[ size - 1 - a];
			Array[size - 1 - a] = chain;
		}
		
		printf("=========================================\n");
		printf("Reversed array elements :");
		for(a = 0 ; a < size ; a++ )
		{
			printf("\n Array[%d] = %d \t", a ,Array[a]);
		}
}
