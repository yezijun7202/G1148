#include <stdio.h>
#include <assert.h>

int calcular_ultim_digit(int n);

int main(void){
	assert(calcular_ultim_digit(32) == 2);
	printf("Ha passat calcular_ultim_digit(32) == 2\n");

	assert(calcular_ultim_digit(234) == 4);
	printf("Ha passat calcular_ultim_digit(234) == 4\n");

	assert(calcular_ultim_digit(0) == 0);
	printf("Ha passat calcular_ultim_digit(0) == 0\n");

	assert(calcular_ultim_digit(-47) == 7);
	printf("Ha passat calcular_ultim_digit(-47) == 7\n");

	return 0;
}


