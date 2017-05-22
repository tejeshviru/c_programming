#include<stdio.h>

// This program uses only stdio.h header calls ( printf and C loop functions such as while)
// This program is intended to find the fibonacci for 'n' range of numbers.
// Equation of fibonacci is fn = fn-1 + fn-2 (Ex Series: 0, 1, 1, 2, 3, 5, 8 ... )

void main(){
	long int fn1=0, fn2=1, fn; // Declaring fn-1, fn-2, fn and the range with int datatype
	int range, k=2; // Declaring range and k =2 constant since 0 & 1 are the constant fixed fibonacci series.
	printf("Enter the range of numbers: ");
	scanf("%d",&range);
	if (range <=1) // Make sure input range is specified as more than 1 as 0,1 are fixed fibonacci series.
		printf("Please specify a range in positive integers and range should be greater than 1\n");
	else
	{
		printf("Fibonacci Series: %ld, %ld,", fn1, fn2);
		while(k < range){
			fn = fn1 + fn2; 
			fn1 = fn2; // Assigning n-2 to n-1 element
			fn2 = fn; // Assigning fn2 to fn and take fn2 to next iteration.
			printf(" %ld,",fn2); // Finally printing the last element everytime.
			k++;
			if (k == range)
				printf("\n");
		}
	}
}
