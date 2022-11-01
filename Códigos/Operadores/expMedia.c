#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, nota3;
	double media;
	
	printf("Informe as três notas do aluno separadas por espaço: ");
	scanf("%f%f%f", &nota1, &nota2, &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	printf("A média do aluno é: %.2lf", media);
	
	return 0;
}
