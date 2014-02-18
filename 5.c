#include <stdio.h>

#define LIMIT 	21

int main(){
	long mcm = 1;
	int facts[LIMIT];
	
	for(int i = 1; i < LIMIT; i++)
		facts[i] = i;
	
	int try = 2;
	int divisible = 0;
	
	while( try < LIMIT ){
		divisible = 0;
		
		for(int i = 2; i < LIMIT; i++){
			if( facts[i] % try == 0 ){
				divisible = 1; //It's divisible
				break;
			}
		}
		
		if( divisible ){
			mcm *= try;
			//Divide them all
			for(int i = 2; i < LIMIT; i++)
				if( facts[i] % try == 0 )
					facts[i] /= try;
		}else{
			try++;
		}
	}

	printf( "%li\n", mcm );
	return 0;
}