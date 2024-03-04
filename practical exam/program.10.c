#include <stdio.h>
main() {
    int number, firstDigit, lastDigit, sum;

    printf("Enter any number: ");
    scanf("%d", &number);

    lastDigit = number % 10;
    firstDigit = number;
    
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    sum = firstDigit + lastDigit;

    printf("The sum of the first and the last digit: %d\n", sum);
}

