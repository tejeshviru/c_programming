#include<stdio.h>

// This program uses only stdio.h header calls ( __FILE__ is used here to get the program file name itself)

int main(){
    FILE *fp; // File pointer fp
    char c; // A character c is used to fill the contents of the file one by one.
    fp = fopen(__FILE__,"r"); // __FILE__ is Standard Predefined Macros in C Programming.
 
    do{
         c= getc(fp); // get character by using the file pointer and point to char variable c. Declaration is int getc(FILE *stream)
         putchar(c); // writes the character specified by the argument c to stdout. Declaration is int putchar(int char) 
    }
    while(c!=EOF); // Loop till c points to EOF ( Here, do-while loop is used)
    fclose(fp); // Closing the File stream pointer fp.
    return 0; // Returning 0 to the main function since we have called main with int return value.
}
