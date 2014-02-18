#include <stdio.h>
#include <math.h>

#define LIMIT 	10000


int main(){
	int d[LIMIT];
	
	d[0] = 0;
	d[1] = 1;
	
	//Find d(x)
	for(int i = 2; i < LIMIT; i++){
		d[i] = 1;
		int sq = (int) sqrt(i);
		for(int j = 2; j <= sq; j++)
			if( i % j == 0 )
				d[i] += j + i / j;
	}

	unsigned long sum = 0;
	for(int i = 1; i < LIMIT; i++){
		int d_i = d[i];
		if( d_i >= LIMIT || d_i == i )
			continue;
		if( i == d[d_i] )
			sum += i;
	}
	
	printf( "%lu\n", sum );
	return 0;
}