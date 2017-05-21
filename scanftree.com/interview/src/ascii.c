#include<stdio.h>

// This program uses only stdio.h header calls ( printf and C loop functions such as if, while)

int main(){
 
  int input;
  printf("Please enter any number between 0 to 255:");
  scanf("%d",&input);
  if ((input > 255) || (input < 0))
	printf("Wrong input and ascii values range between 0 to 255\n");
  else
  	printf("ASCII value of character %c is %d\n",input,input);
  return 0;
}
