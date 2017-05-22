#include<stdio.h>

// This program uses only stdio.h header calls ( printf and C loop functions such as if, while)
 
int main(){
    int num,i,count,range,loop=0;
    printf("Enter range of prime numbers: ");
    scanf("%d",&range); // Let's say range=5;
  
    for(num = 1;num<=range;num++){ // 1<=5; 2<=5; 3<=5;4<=5;5<=5;
         count = 0;

         for(i=2;i<=num/2;i++){  // 2<=0;2<=0;2<=1;2<=2;2<=2; 
             if(num%i==0){ // N/A;N/A;N/A;4%2==0;5%2==1;
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1) // (count=0;num==1);(count=0;num!=1); (count=0;num!=1) ; (count=1;num!=1); (count=0;num!=1) 
             printf("%d ",num); // 2 3 5 
    }
  
   return 0;
}

