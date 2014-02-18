#include <stdio.h>
#include <math.h>
#include <limits.h>

#define BIG_NUM __int64

int isPrime(BIG_NUM num){
	
	float top = sqrt( num);
	
	for(int i = 2; i < num; i++){
		if( num % i == 0 )
			return 0;
	}
	
	return 1;
}

BIG_NUM lpf(BIG_NUM num){
	BIG_NUM sq = (BIG_NUM)sqrt(num);

	BIG_NUM prime = 2;
	
	for(int i = 2; i < sq; i++){
		if( num % i == 0 ){
			if( isPrime(i) ){
				if( i > prime ){
					prime = i;
				}
			}
			int other = num / i;
			if( isPrime(other) ){
				if( other > prime ){
					prime = other;
				}
			}
		}
	}
	return prime;
}

int main(){
	BIG_NUM num = 600851475143;
	BIG_NUM l = lpf(num);
	
	printf(" LPF(%llu) = %llu\n", num, l);
	
	return 0;
}