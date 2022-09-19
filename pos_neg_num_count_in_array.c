/* C program to find the count of positive and 
negative integers in an array */

#include <stdio.h>

/* Function to find the count of positive integers in an array*/
int countPositiveNumbers(int* arr, int n)
{
	int pos_count = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] > 0)
			pos_count++;
	}
	return pos_count;
}
/* Function to find the count of negative integers in an array */

int countNegativeNumbers(int* arr, int n)
{
	int neg_count = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] < 0)
			neg_count++;
	}
	return neg_count;
}

// Driver program
int main()
{
    int n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d value in array : \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d value in array \n", i + 1);
        scanf("%d", &arr[i]);
    }
     
    // To print the array
    printf("Array: [ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]");
    printf("\n");
    // calling functions to check numbers
    int p_num = countPositiveNumbers(arr, n);
    int n_num = countNegativeNumbers(arr, n);

    printf("Total Positive numbers in given array = %d\n", p_num);
    printf("Total Negative numbers in given array = %d\n", n_num);
    printf("Total Zeros in given array = %d\n", n-(p_num + n_num));

    
    return 0;
}