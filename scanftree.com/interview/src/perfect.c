#include<stdio.h>

// This program uses only stdio.h header calls ( printf and C loop functions such as if, while)
// Perfect number is a number which is equal to the sum of its proper divisors (Ex: 6-> divisors are 3,2,1 and sum of 3+2+1=6)

int main(){
  int n,i=1,sum=0;
 
  printf("Enter a number: ");
  scanf("%d",&n); // Let's say 6
 
  while(i<n){ // 1<6; 2<6;3<6;4<6;5<6
      if(n%i==0) 
           sum=sum+i; // 1; 3; 6; N/A;N/A;
          i++;
  }
  if(sum==n) // (sum =6; n = 6)
      printf("%d is a perfect number",i);
  else
      printf("%d is not a perfect number",i);
 
  return 0;
}
