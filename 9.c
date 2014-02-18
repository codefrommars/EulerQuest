#include <stdio.h>

#define LEN 1000

int main(){
	for(int a = 1; a < 998; a++){
		for(int b = 1; b < 998; b++){
			int c = 1000 - (a + b);
			if( a*a + b*b == c*c ){
				printf( "%i^2 + %i^2 = %i^2 (a+b+c) = %i and a*b*c=%i\n", a, b, c, a+b+c, a*b*c );
			}
		}
	}
	
	
	return 0;
}