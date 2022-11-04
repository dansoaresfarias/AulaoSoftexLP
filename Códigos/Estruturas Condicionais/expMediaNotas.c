#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, nota3, media;
	
	printf("Digite a 1ª nota do aluno: ");
	scanf("%.2f", &nota1);
	
	printf("\nDigite a 2ª nota do aluno: ");
	scanf("%.2f", &nota2);
	
	printf("\nDigite a 3ª nota do aluno: ");
	scanf("%.2f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3.0;
	printf("\nA média do aluno foi: %.2f", media);
	
	return 0;
}
