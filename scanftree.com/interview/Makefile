# Makefile to compile all programs and store respective output binaries

# Global Variables

PWD=$(shell pwd)
SRC=$(PWD)/src
OUTPUT=$(PWD)/__output

# Makes all programs and stores output in __output directory
all:
	gcc $(SRC)/program_source.c -o $(OUTPUT)/program_source
	gcc $(SRC)/print_without_semicolon.c -o $(OUTPUT)/print_without_semicolon
	gcc $(SRC)/factorial.c -o $(OUTPUT)/factorial
	gcc $(SRC)/fibonacci.c -o $(OUTPUT)/fibonacci
	gcc $(SRC)/quadratic.c -lm -o $(OUTPUT)/quadratic
	gcc $(SRC)/palindrome_string.c -o $(OUTPUT)/palindrome_string
	gcc $(SRC)/palindrome_number.c -o $(OUTPUT)/palindrome_number

# Cleans all binaries stored in __output directory
clean:
	rm -rf $(OUTPUT)/*
	
