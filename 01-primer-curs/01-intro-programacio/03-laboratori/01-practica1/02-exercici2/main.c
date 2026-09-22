#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool es_digit(int n);

int main(void){

//	assert(es_digit(4) == true);
//	printf("Ha passat es_digit(4) == true\n");
//
//	assert(es_digit(234) == false);
//	printf("Ha passat es_digit(234) == false\n");
//
//	assert(es_digit(0) == true);
//	printf("Ha passat es_digit(0) == true\n");
//
//	assert(es_digit(9) == true);
//	printf("Ha passat es_digit(9) == true\n");
//
//	assert(es_digit(-4) == false);
//	printf("Ha passat es_digit(-4) == false\n");
	
	int digit;
	
	printf ("Introdueix un dígit: "); 
	
	if (scanf("%d", &digit) == 1){
		
		if (es_digit(digit) == true){
			
			printf ("És un dígit\n");
		}

		else {

			printf ("No és un dígit\n");
		}
	}

	else {
		printf("Error: l’entrada no es un nombre enter vàlid\n");

	}
	
       	return 0;

}


