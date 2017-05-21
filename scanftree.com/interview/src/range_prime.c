#include<stdio.h>

// This program uses only stdio.h header calls ( printf and C loop functions such as if, while)
 
int main(){
    int num,i,count,range;
    printf("Enter range of prime numbers: ");
    scanf("%d",&range);
  
    for(num = 1;num<=range;num++){
         count = 0;
 
         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             printf("%d ",num);
    }
  
   return 0;
}

