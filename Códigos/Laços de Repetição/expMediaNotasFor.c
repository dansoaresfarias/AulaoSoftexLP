#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float nota, media = 0.0;
	int qtdNotas, i;
	
	printf("Informe quantas notas o aluno tem:");
	scanf("%.2f", &qtdNotas);
	
	for(i = 1 ; i <= qtdNotas ; i++){
		printf("Digite a %.2f� nota do aluno: ", i);
		scanf("%.2f", &nota);
		media += nota;
	}
		
	media /= (qtdNotas);
	printf("\nA m�dia do aluno foi: %.2f", media);
	
	return 0;
}
