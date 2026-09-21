#include <stdio.h>
#include <assert.h>

int calcular_any_naixement(int edat_actual);
int calcular_any_doble_edat(int edat_actual);


int main(void){
//
//	assert(calcular_any_naixement(19) == 2026-19);
//	printf("Ha passat calcular_any_naixement(19) == 2026-19\n");
//
//	assert(calcular_any_doble_edat(19) == 2026 + 19);
//	printf("Ha passat calcular_any_doble_edat(19) == 2026 + 19\n");
//
//	assert(calcular_any_naixement(65) == 2026-65);
//	printf("Ha passat calcular_any_naixement(65) == 2026-65\n");
//
//	assert(calcular_any_doble_edat(65) == 2026 + 65);
//	printf("Ha passat calcular_any_doble_edat(65) == 2026 + 65\n");
//
//	assert(calcular_any_naixement(33) == 2026-33);
//	printf("Ha passat calcular_any_naixement(19) == 2026-33\n");
//
//	assert(calcular_any_doble_edat(33) == 2026 + 33);
//	printf("Ha passat calcular_any_doble_edat(19) == 2026 + 33\n");
//	
//	printf("Ha passat tots els casos!\n");
	
	int edat;

	printf("Introdueix la teva edat: ");

	if (scanf("%d", &edat) == 1){

		printf("Vas néixer al %d \n", calcular_any_naixement(edat));
		// no pots separar el text en dos arguments
		// ja que per un únic identificador de format (%) es requereix d'un únic argument (string en aquest cas)
		printf("L'any %d tindràs el doble d'edat\n", calcular_any_doble_edat(edat)); 
	}

	else {
		printf("Error: la entrada no és un nombre enter vàlid");
	
	}

	return 0;
}
