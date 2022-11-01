#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float r, comp, area, volume;
	const float PI = 3.141592;
	const char BIB = '\a';
	
	printf("Informe o raio da esfera: ");
	scanf("%f", &r);
	
	comp = 2 * r * PI;
	area = 4 * PI * r * r;
	volume = (r * r * r * PI ) * 4/3;
	
	printf("\n\tComprimento: %.2f | Área: %.2f | Volume: %.2f %c%c\n", comp, area, volume, BIB, BIB);
	
	return 0;
}
