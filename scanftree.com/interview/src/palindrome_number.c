#include<stdio.h>

// This program uses only stdio.h header calls ( printf and C loop functions such as if, while)

int main(){
    int num,r,sum=0,temp; 
 
    printf("Enter a number: ");
    scanf("%d",&num); // Let's say example value of num is 121
 
    temp=num; // temp = 121;
    while(num){ 
         r=num%10; // r = 1; r = 2; r = 1;
         num=num/10; // num = 12; num = 1; num = 0;
         sum=sum*10+r; // sum = 1; sum = 12; sum = 121;
    }
    if(temp==sum)
         printf("%d is a palindrome",temp);
    else
         printf("%d is not a palindrome",temp);
 
    return 0;
}
