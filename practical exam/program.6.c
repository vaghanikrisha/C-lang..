#include <stdio.h>
main() 
{
    int num , i, prime = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num <= 1) 
	{
        printf("%d is not a prime number.\n", num);
    } 
	else 
	{
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                prime = 1;
            }
        }
    	if (prime == 0) 
		{
        	printf("%d is a prime number.\n", num);
    	} 
		else 
		{
	    	printf("%d is not a prime number.\n", num);
    	}
    }
}

