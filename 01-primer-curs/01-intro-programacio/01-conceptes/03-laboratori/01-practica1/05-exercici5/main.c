#include <stdio.h>
#include <assert.h>

int max_of3_amb2if(int a, int b, int c);

int main(void){

//	assert(max_of3_amb2if(1,2,3) == 3);
//	assert(max_of3_amb2if(11,2,-3) == 11);
//	assert(max_of3_amb2if(0,-23,-2) == 0);
//	assert(max_of3_amb2if(1,1,1) == 1);
//
//	printf("Han passat tots els casos!\n");
//
	
	int a, b, c;

	printf("Introdueix tres enters (entre espais): ");
	
	if (scanf("%d %d %d", &a, &b, &c) == 3){
		
		printf("El màxim de %d %d %d és %d\n", a,b,c, max_of3_amb2if(a,b,c));

	}

	else {
		printf("Error: no has introduït 3 valors enters!\n");
	}

	return 0;
}


