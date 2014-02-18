#include <stdio.h>
#include <math.h>

#define LIMIT 500
#define BIG __int64

int main(){
	
	int divC = 0;
	
	BIG n, triang;
	n = 1;
	triang = 1;
	
	do{
		divC = 0;
		n++;
		triang += n;
		
		BIG sq = (BIG) sqrt(triang);
		
		for(BIG i = 1; i < sq; i++){
			if( triang % i == 0 )
				divC ++;
		}
		
		divC *= 2;
		
		if( triang % sq == 0 )
			divC++;
	}while (divC <= LIMIT);
	
	printf("%llu\n", triang);
	
	return 0;
}