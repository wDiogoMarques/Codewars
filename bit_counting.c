// file: 	bit_counting.c
// author:	Diogo Marques
// data:	01/05/2025
// description:
//		Bit Counting kata at codewars.com

#include <stddef.h>
#include <stdio.h>


size_t countBits(unsigned value)
{
	size_t bits = 0;
	while(value >= 1){
		if((value%2) == 1){bits++;}
		value /= 2;
	}
	return bits;
}

int main(){

	size_t bits = countBits(1234);
	printf("number 1234 has %ld bits\n", bitsoften);

	return 0;
}