#include <stdio.h>
#include <assert.h>

int maxof3(int a, int b, int c);

int main(void){

//	assert(maxof3(1,2,3)== 3);
//	printf("Ha passat maxof3(1,2,3) ==3\n");
//
//	assert(maxof3(21,32,13)== 32);
//	printf("Ha passat maxof3(21,32,13) ==32\n");
//
//	assert(maxof3(-11,4,0)== 4);
//	printf("Ha passat maxof3(-11,4,0) ==4\n");
//
//	assert(maxof3(1,224,-3)== 224);
//	printf("Ha passat maxof3(1,224,-3) ==224\n");
//

	int a, b, c; // no podem fer servir arrays en les pràctiques
	printf("Introdueix tres enters: ");
	if (scanf("%d %d %d", &a, &b, &c) == 3){
		printf("El màxim dels enters %d, %d, %d és %d\n", a,b,c, maxof3(a,b,c));
	}

	else {
		printf("Error: no has retornat 3 valors enters\n");
	}

	return 0;
}



