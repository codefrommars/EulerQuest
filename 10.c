#include <stdio.h>
#include <math.h>

#define MAX 2000000
#define BIG __int64

int isPrime(BIG num){
	if( num % 2 == 0 )
		return 1;
		
	BIG sq = (BIG)sqrt(num);
	for(BIG i = 3; i <= sq; i += 2 ){
		if( num % i == 0 )
			return 0;
	}
	return 1;
}

int main(){
	
	BIG sum = 2 + 3;
	
	//A prime is 6k +/- 1
	for(BIG p = 6; p < MAX; p += 6){
		BIG ap = p - 1;
		BIG sp = p + 1;
		//Check if they are primes
		//printf("checking: %llu\n", ap);
		if( isPrime(ap) ){
			//printf("prime: %llu!!\n", ap);
			sum += ap;
		}
		//printf("checking: %llu\n", sp);
		if( isPrime(sp) ){
			//printf("prime: %llu!!\n", sp);
			sum += sp;
		}
	}
	
	printf("%llu\n", sum);
	
	return 0;
}