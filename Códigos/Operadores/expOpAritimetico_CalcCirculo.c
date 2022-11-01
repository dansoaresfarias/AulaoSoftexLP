#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float r, area, comp;
	const float PI = 3.141592;
	
	printf(".:: Programa para calcular a ·rea e o comprimento do circulo ::.\n\n");
	printf("Ol·, informe o raio do circulo: ");
	scanf("%f", &r);
	
	area = PI * r * r;
	comp = 2 * PI * r;
	
	printf("\n\t¡rea: %.2f | Comprimento: %.2f\n", area, comp);
	
	return 0;
}
