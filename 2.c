#include <stdio.h>

int main(){
	int fi_1 = 0;
	int fi = 1;
	int sum = 0;
	int fn = 1;
	while( fn < 4000000 ){
		fn = fi + fi_1;
		fi_1 = fi;
		fi = fn;
		if( fn % 2 == 0)
			sum += fn;
	}
	
	printf("%i\n", sum);
	
	return 0;
}