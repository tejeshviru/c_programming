#include<stdio.h>

// This program uses only stdio.h header calls ( printf and C loop functions such as if, while)
// A number is called strong number if sum of the factorial of its digit is equal to number itself. For example: 145 (1!+4!+5!=145)

int main() 
{
	int num,i,f,r,sum=0,temp;
	printf("Enter a number: ");
	scanf("%d",&num); // Let's say num=145
	temp=num; 
	while(num) {
		i=1,f=1;
		r=num%10; // r=5; r=4;r=1;
		while(i<=r) { 
			f=f*i; // This loop calculate factorial of r 
			i++; 
		}
		sum=sum+f; // f=120(sum=120); f=24(sum=144); f=1(sum=145) 
		num=num/10; // num=14; num=1;
	}
	if(sum==temp)
	      printf("%d is a strong number",temp); 
	else
	      printf("%d is not a strong number",temp);
	return 0;
}
