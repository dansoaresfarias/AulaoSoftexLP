#include <stdio.h>
#include <locale.h>
#include "esfera.h"

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float r;
	
	printf("Informe o raio da esfera: ");
	scanf("%f", &r);
	
	printf("\n\tComprimento: %.2f | Área: %.2f | Volume: %.2f \n", compEsfera(r), areaEsfera(r), volumeEsfera(r));
	
	return 0;
}


