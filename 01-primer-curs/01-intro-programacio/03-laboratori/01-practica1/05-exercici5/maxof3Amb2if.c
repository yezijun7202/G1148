// funció que retorna el màxim de tres enters amb només 2 alternatives if
//

int max_of3_amb2if(int a, int b, int c);

int max_of3_amb2if(int a, int b, int c){

	int max;
	if (a >= b && a >= c){
		
		max = a;

	}

	else {
		if (b >= c){
			
			max = b;
		}
		
		else{
			max = c;
		}
	}
		

	return max;

}
