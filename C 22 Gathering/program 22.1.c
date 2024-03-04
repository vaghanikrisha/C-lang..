#include<stdio.h>


void sum(int a, int b) {
    printf("Sum of %d and %d is %d\n", a, b, a + b);
}

void sub(int a, int b) {
    printf("Subtraction of %d and %d is %d\n", a, b, a - b);
}

void multiply(int a, int b) {
    printf("Multiplication of %d and %d is %d\n", a, b, a * b);
}

void division(int a, int b) {
    if (b != 0)
        printf("Division of %d and %d is %d\n", a, b, a / b);
}

void modulus(int a, int b) {
    printf("Modulus of %d and %d is %d\n", a, b, a % b);
}


int main()
{
    int i , j ,choice;
   
        printf("enter the value of a number :-");
        scanf("%d",&i);
       
        printf("enter the value of b number :-");
        scanf("%d",&j);
        
        printf("\n");
        do{
            printf("Press 1 for +\n");
            printf("Press 2 for -\n");
            printf("Press 3 for *\n");
            printf("Press 4 for /\n");
            printf("Press 5 for %%\n");
            printf("Press 0 for Exit.....\n");
            printf("enter your choice . . .");
            
            printd("\n");
            scanf("%d",&choice);
           
                switch(choice)
				{
                   
                    case 1:
                        sum(i, j);
                    break;
                   
                    case 2:
                        sub(i, j);
                    break;
                   
                    case 3:
                        multiply(i, j);
                    break;
                   
                    case 4:
                        division(i, j);
                    break;
                   
                    case 5:
                        modulus(i, j);
                    break;
                       
                    case 0:
                        printf("Thank Yuhh For Joining Us");
                    break;
                   
                    default:
                    printf("\n*******************************************\n");
                        printf("PLease Enter Valid Number....!!!!\n");
                    break;
                }
        }
		while(choice!=0);
		
		return 0;
}

