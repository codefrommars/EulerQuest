#include <stdio.h>
#include <math.h>

#define LIMIT 	28123

char isAbundant(int num){
	if (num == 0)
		return 0;
	int sum = 1;
	float sq = (float)sqrt(num);

	for(int i = 2; i*i <= num; i++)
		if( num % i == 0 ){
			sum += i ;
			if( i*i != num )
				sum += ( num / i );
		}

	return sum > num;
}

int main(){
	char isSumOfAbs[LIMIT + 1];
	
	int abundants[LIMIT];
	int abSize = 0;
	
	for(int i = 0; i <= LIMIT; i++){
		isSumOfAbs[i] = 0;
		if( isAbundant(i) ){
			abundants[abSize] = i;
			abSize++;
		}
	}

	for(int i = 0; i < abSize; i++){
		for(int j = i; j < abSize; j++){
			long s = abundants[i] + abundants[j];
			if( s <= LIMIT ){
				isSumOfAbs[ (int)s ] = 1;
			}
		}
	}

	unsigned long sum = 0;

	for(int i = 0; i <= LIMIT; i++){
		if( !isSumOfAbs[i] ){
			sum += i;
		}
	}

	printf( "%lu\n", sum );
	
	return 0;
}