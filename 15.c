#include <stdio.h>

#define SQ 20

unsigned long comb(int n, int r){
	unsigned long comb = 1;
	for(int i = r + 1; i <= n; i++) 
		comb *= i;
	for(int i = 1; i <= n - r; i++)
		comb /= i;
	return comb;
}

int main(){
	__int64 num = 1;
	int perim = SQ * 2;
	
	for( int i = SQ + 1; i <= perim; i++)
		num *= i;
	
	__int64 denum = 1;
	for(int i = 1; i <= SQ; i++)
		denum *= i;
	
	__int64 res = 0;
	//res = num / denum;
	
	unsigned long c = comb(40, 20);
	
	res = c;
	
	
	printf("%lu\n", res);
	return 0;
}