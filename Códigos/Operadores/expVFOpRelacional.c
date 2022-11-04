#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int verdade, falso;
	verdade = (15 < 20);
	falso   = (15 == 20);
	printf("Verdade : %.2f | Falso : %.2f", verdade, falso);
	int teste = !(verdade && falso);
	printf("\nTeste : % d", teste);
	return 0;
}
