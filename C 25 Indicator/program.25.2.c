#include<stdio.h>
// UDF to calculate cube of a number
int cube(int number) 
{
    return number * number * number;
}

int main() {
    int n,i ,j;
    printf("Enter array's size: ");
    scanf("%d", &n);

    int arr[n][n];
    int *ptr = &arr[0][0];

    printf("Enter array elements:\n");
    for( i = 0; i < n; i++) {
        for( j = 0; j < n; j++) {
        printf("arr[%d][%d] = ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Cubes of all elements:\n");
    for( i = 0; i < n; i++) {
        for( j = 0; j < n; j++) {
            printf("%d ", cube(*(ptr + i*n + j)));
        }
        printf("\n");
    }

    return 0;
}


