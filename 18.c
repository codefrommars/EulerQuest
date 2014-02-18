#include <stdio.h>


#define DEPTH		15
#define MAX(X, Y) 	( (X) > (Y) ? (X) : (Y) )
int nums[DEPTH][DEPTH];
int s[DEPTH][DEPTH];

int main(){
const char * t[] = 
						{
							"75",
							"95 64",
							"17 47 82",
							"18 35 87 10",
							"20 04 82 47 65",
							"19 01 23 75 03 34",
							"88 02 77 73 07 63 67",
							"99 65 04 28 06 16 70 92",
							"41 41 26 56 83 40 80 70 33",
							"41 48 72 33 47 32 37 16 94 29",
							"53 71 44 65 25 43 91 52 97 51 14",
							"70 11 33 28 77 73 17 78 39 68 17 57",
							"91 71 52 38 17 14 91 43 58 50 27 29 48",
							"63 66 04 68 89 53 67 30 73 16 69 87 40 31",
							"04 62 98 27 23 09 70 98 73 93 38 53 60 04 23"
						};
	
	
	
	for(int i = 0; i < DEPTH; i++){
		for(int j = 0; j < i + 1; j++){
			sscanf( &t[i][ 3 * j ], "%2d", &nums[i][j] );
			//printf("%2d ", nums[i][j]);
		}
		//printf("\n");
	}
	
	for( int d = DEPTH - 1; d >= 0; d--){
		s[DEPTH-1][d] = nums[DEPTH-1][d];
	}
	
	for( int d = DEPTH - 2; d >= 0; d--){
		for(int j = 0; j <= d; j++){
			s[d][j] = nums[d][j] + MAX(s[d + 1][j], s[d + 1][j + 1]);
		}
	}
	
	printf("%i\n", s[0][0]);
	
	return 0;
}