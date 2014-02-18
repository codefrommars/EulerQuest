#include <stdio.h>

int main(){
	__int64 num = 0;
	int count = 0;
	int max = 0;
	int maxNum = 0;
	
	for(int i = 2; i < 1000000; i++){
		num = i;
		count = 1;
		while ( num > 1 ){
			if( num % 2 == 0 )
				num /= 2;
			else
				num = 3 * num + 1;
			count++;
		}
		if( count > max ){
			max = count;
			maxNum = i;
		}
		
		//printf("%lu => %i\n", i, count);
	}
	
	printf("%i\n", maxNum);
	
	return 0;
}