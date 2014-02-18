#include <stdio.h>
#include <math.h>

#define LIMIT 	1000001
#define BIG_INT __int64

int main(){
	BIG_INT primes[LIMIT];
	
	int nthPrime = 2;
	primes[0] = 2;
	primes[1] = 3;
	BIG_INT num = 5;
	while ( nthPrime < LIMIT ){
		int isPrime = 1;
		//Check if it is prime
		BIG_INT sq = (BIG_INT)sqrt(num);
		for( int i = 0; i < nthPrime && primes[i] <= sq; i++ ){
			if( num % primes[i] == 0 ){
				isPrime = 0;
				break;
			}
		}
		if( isPrime ){
			primes[nthPrime] = num;
			nthPrime ++;
		}
		num += 2;
	}
	
	printf( "%llu\n", primes[LIMIT - 1] );
	return 0;
}