#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float nota, media = 0.0;
	
	printf("Digite a 1� nota do aluno: ");
	scanf("%.2f", &nota);
	media += nota;
	
	printf("\nDigite a 2� nota do aluno: ");
	scanf("%.2f", &nota);
	media += nota;
	
	printf("\nDigite a 3� nota do aluno: ");
	scanf("%.2f", &nota);
	media += nota;
	
	media /= 3.0;
	printf("\nA m�dia do aluno foi: %.2f", media);
	
	return 0;
}
