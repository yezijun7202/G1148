// funció que retorna un booleà sobre si un punt està dins d'una circumferència o no
#include <stdbool.h>
#include <math.h> // per fer operacions matemàtiques

bool punt_dins_circumferencia(double cx, double cy, double r, double px, double py);

bool punt_dins_circumferencia(double cx, double cy, double r, double px, double py){
	
	// calculem la distància euclidiana o d'un segment format pels punts c, p

	double distancia_e = pow((pow((py-cy),2) + pow((px-cx),2)),0.5);
	
	// per tal de saber si el punt és a dins de la circumferencia
	// comparem la distància euclidiana amb el radi
	bool dins_circumferencia = distancia_e <= r;

	return dins_circumferencia;

}


