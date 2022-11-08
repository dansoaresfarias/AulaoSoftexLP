#include <stdio.h>
#include <locale.h>
#include "fatorial.h"

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n;
	
	printf("Informe um número inteiro positivo para calcularmos o fatorial dele: ");
	scanf("%d", &n);
	
	printf("\n\t %d! = %d", n, fatorial(n));
	
	return 0;
}
