#include<stdio.h>

// This program uses only stdio.h header calls ( printf and C loop functions such as while)
// This program is intended to find the fibonacci for 'n' range of numbers.

void main(){
	long int fn1=0, fn2=1, fn; // Declaring fn-1, fn-2, fn and the range with int datatype
	int range, k=2; // Declaring range and k =2 constant since 0 & 1 are the constant fixed fibonacci series.
	printf("Enter the range of numbers: ");
	scanf("%d",&range);
	if (range <=1)
		printf("Please specify a range in positive integers and range should be greater than 1\n");
	else
	{
		printf("Fibonacci Series: %ld, %ld,", fn1, fn2);
		while(k < range){
			fn = fn1 + fn2;
			fn1 = fn2;
			fn2 = fn;
			printf(" %ld,",fn2);
			k++;
			if (k == range)
				printf("\n");
		}
	}
}
