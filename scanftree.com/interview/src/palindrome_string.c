#include <stdio.h>
#include <string.h>

// This program uses only stdio.h header calls ( printf and C loop functions such as if, while)

int main() {
	char text[100]; // Declare a char array of length 100  
	int begin, middle, end, length = 0; // begin, end, middle characters and also length is declared;
	printf("Enter input string here:");
	scanf("%s",text); // Let's say we scan string "madam"
	while ( text[length] != '\0' ) // to calculate length of the string till we encounter 
	      length++;
	//length=strlen(text);
	end = length - 1; // end = 4;
	middle = length/2; // middle = 2;
	for ( begin = 0 ; begin < middle ; begin++ ) {
		if ( text[begin] != text[end] ) { // m != m ( end =4;begin=0); a != a(end=3;begin=1); d !=d(end=2;begin=2); 
			printf("Not a palindrome.\n");
			break;
		}
		end--;
	}
	if( begin == middle ) // (begin = 2;middle=2)
	      printf("Palindrome.\n");
	return 0;
}
