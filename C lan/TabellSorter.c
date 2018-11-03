/**
DEMO OF BUBBLE SORT
**/
#include <stdio.h>
#include "int_array_func.h"

#define ARR_SIZE 100 // Symbolic constant for the size of array

int main(void)
{
	int data[ARR_SIZE]; // Originalsequence - doenst change
	
	fill_array_rand(data, ARR_SIZE, 0, 1500, 1); // Generates random sequence
	
	printf("Original sequence:\n");
	printf("HIT ENTER FOR GOING \x86 G\x86 FURTHER!");
	getchar();
	print_array(data, ARR_SIZE);   //Prints out the reference
	
	// Test of BUBBLE SORT
	int i; // Countvariabel to scan tabell
	int count; // counts numbers of needed swaps
	int last;  // The last unsorted position
	
	printf("BUBBLE SORT:\n");
	printf("HIT ENTER FOR GOING \x86 G\x86 FURTHER!");
	getchar();
	last = ARR_SIZE-1;
	do
	{
		//printf("\nBtn: ");
		count = 0;
		for (i = 0; i < last; i++)
		{
			if (data[i] > data[i + 1])
			{
				int temp = data[i];
				printf("%d <-> %d ", data[i], data[i+1]);
				data[i] = data[i + 1];
				data[i + 1] = temp;count++;
			}
		}
		last --;
		//print_array_w(data, ARR_SIZE, 3);
	}
	while ( count != 0);
	
	printf("\n\nSorted sequence:\n");
	
	print_array(data, ARR_SIZE);
	return 0;
}