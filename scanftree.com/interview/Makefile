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
	gcc $(SRC)/strong_number.c -o $(OUTPUT)/strong_number
	gcc $(SRC)/prime.c -o $(OUTPUT)/prime
	gcc $(SRC)/range_prime.c -o $(OUTPUT)/range_prime
	gcc $(SRC)/pascal_triangle.c -o $(OUTPUT)/pascal_triangle
	gcc $(SRC)/ascii.c -o $(OUTPUT)/ascii
	gcc $(SRC)/perfect.c -o $(OUTPUT)/perfect

# Cleans all binaries stored in __output directory
clean:
	rm -rf $(OUTPUT)/*
	
