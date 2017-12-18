#include<stdio.h>

// This program uses only stdio.h header calls ( printf and C loop functions such as if, while)

int main(){

  int input; // Declaring Input Integer
  printf("Please enter any number between 0 to 255:");
  scanf("%d",&input); // Scanning Input Integer
  if ((input > 255) || (input < 0)) // Verify the range of inputs need to be between 0 to 255
	printf("Wrong input and ascii values range between 0 to 255\n");
  else
  	printf("ASCII value of character %c is %d\n",input,input); // Print Output in character identifier %c
  return 0;
}

# Simple comment addition to test git features in Atom.
