#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, nota3;
	double media;
	
	printf("Informe as tr�s notas do aluno separadas por espa�o: ");
	scanf("%f%f%f", &nota1, &nota2, &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	printf("A m�dia do aluno �: %.2lf", media);
	
	if(media >= 7.0){
		printf("\n\tAluno APROVADO!\n");
	} else{
		printf("\n\tAluno REPROVADO!\n");
	}
	
	return 0;
}
