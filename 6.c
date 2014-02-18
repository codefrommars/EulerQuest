#include <stdio.h>

#define LIMIT 	100

int main(){
	long sqSum = 0;
	
	for(int i = 1; i <= LIMIT; i++)
		sqSum += i*i;
	
	long sumSq = LIMIT * ( LIMIT + 1 ) / 2;
	sumSq *= sumSq;

	printf( "%li\n", sumSq - sqSum );
	return 0;
}