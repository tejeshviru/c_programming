#include<stdio.h>
 
// This program uses only stdio.h header calls ( printf and C loop functions such as if, while)

long fact(int); // Declare Function Prototype to find factorial with long as return type

int main(){
    int line,i,j;
 
    printf("Enter the no. of lines: "); 
    scanf("%d",&line); // Input Number of lines Let's say line =5
 
    for(i=0;i<line;i++){ 
         for(j=0;j<line-i-1;j++)
             printf(" "); // Prints equivalent spaces required.
 
         for(j=0;j<=i;j++)
             printf("%ld ",fact(i)/(fact(j)*fact(i-j))); // Prints required factorial numbers after spaces like 1,2,6,24,...
         printf("\n"); // For every loop print new line
    }
    return 0;
}

// Function to find the factorial of a integer
// Consider an example of 5 factorial;
long fact(int num){
    long f=1;
    int i=1;
    while(i<=num){ // 1<=5; 2<=5; 3<=5; 4<=5; 5<=5;
         f=f*i; // f=1; f= 2; f=6; f=24; f= 120;
         i++; // i =1; i =2; i =3; i=4; i = 5;
  }
  return f; // Returning 120
}
