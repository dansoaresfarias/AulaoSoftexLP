#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float lado;
	float area, comp;
	
	lado = 4;
	area = lado * lado;
	comp = 4 * lado;
	
	printf("O comprimento : %.2f \n", comp);
	printf("A área : %.2f", area);
	
}
