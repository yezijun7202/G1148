// funció que retorna l'última xifra donada un valor enter
#include <stdlib.h> // per fer ús de abs()

int calcular_ultim_digit(int n);

int calcular_ultim_digit(int n){

	return abs(n) % 10;
}


