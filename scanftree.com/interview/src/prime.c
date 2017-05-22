#include<stdio.h>

// This program uses only stdio.h header calls ( printf and C loop functions such as if, while)
// Prime numbers are the odd numbers which is divisible by itself and 1. 2 is the only even prime number (ex: 2, 3, 5, 7, 13 ... )
 
int main(){
 
    int num,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&num); // Lets say num=7
    for(i=2;i<=num/2;i++){ // 2<=3; 3<=3;
        if(num%i==0){ // 7%2=1; 7%3=1;
         count++;
            break;
        }
    }
   if(count==0 && num!= 1) // count=0; num !=1
        printf("%d is a prime number",num);
   else
      printf("%d is not a prime number",num);
   return 0;
}
