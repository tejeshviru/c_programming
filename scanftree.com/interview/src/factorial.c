#include<stdio.h>

// This program uses only stdio.h header calls ( for loop function and basic data types are used.)

int main(){
  int i,f=1,num; // Since we want to find the factorial from 0 to N assigning f equals to 1 since 0! = 1

  printf("Enter a number: "); // Input
  scanf("%d",&num); // Scans number
  if (num >= 0){
 	for(i=1;i<=num;i++) // i is equal to 1 because 0! = 1 ( 0 Factorial is 1)
      		f=f*i;
  	printf("Factorial of %d is: %d \n",num,f);
  }
  else
        printf("%d is a negative number and this cannot be processed for factorial calculation \n", num);
  return 0;
}
