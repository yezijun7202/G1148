// funció que diu si un enter és digit o no
#include <stdbool.h> // per fer servir booleans
		     
bool es_digit(int n);

bool es_digit(int n){
	
	if (n >= 0 && n <= 9){
		
		return true;
	}

	else{ 
		return false;
	}
}


