#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool punt_dins_circumferencia(double cx, double cy, double r, double px, double py);

int main(void){

	assert(punt_dins_circumferencia(0.0, 0.0, 1.0, 1.0, 0.0) == true);
	assert(punt_dins_circumferencia(1.0, 2.0, 1.2, 0.0, 0.0) == false);
	assert(punt_dins_circumferencia(0.0, 0.0, 2.0, 2.0, 4.0) == false);
	assert(punt_dins_circumferencia(1.0, 1.0, 3.0, 3.0, 0.0) == true);

	printf("Ha passat tots els casos!\n");

	return 0;
}


	




