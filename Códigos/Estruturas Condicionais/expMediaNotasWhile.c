#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float nota, media = 0.0;
	int qtdNotas = 0;
	int teste = 1;
	
	while(teste == 1){
		qtdNotas++;
		printf("\nDigite a %d� nota do aluno: ", qtdNotas);
		scanf("%.2f", &nota);
		media += nota;
		printf("\nVoc� deseja informar mais alguma nota do aluno? (1-sim | 0-n�o): ");
		scanf("%d", &teste);
	}
		
	media /= (qtdNotas);
	printf("\nA m�dia do aluno foi: %.2f", media);
	
	return 0;
}
