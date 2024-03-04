#include <stdio.h>
main() 
{
    int i , j , rows, cols, sum = 0 ;
    float average;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);

    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int array[rows][cols];

    printf("Enter array elements:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }

    average = (float)sum / (rows * cols);

    printf("\nAverage of the Array: %.2f\n", average);
}

