#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float nota, media = 0.0;
	int qtdNotas, i;
	
	printf("Informe quantas notas o aluno tem:");
	scanf("%d", &qtdNotas);
	
	for(i = 1 ; i <= qtdNotas ; i++){
		printf("Digite a %iª nota do aluno: ", i);
		scanf("%f", &nota);
		media += nota;
	}
		
	media /= (qtdNotas);
	printf("\nA média do aluno foi: %.2f", media);
	
	if(media >= 0.0 && media <= 3.0){
		printf("\nVocê ficou com conceito E e foi REPROVADO");
	}else if(media > 3.0 && media < 7.0){
		printf("\nVocê ficou com conceito D e foi para FINAL");
	}else if(media >= 7.0 && media < 8.0){
		printf("\nVocê ficou com conceito C e foi APROVADO");
	}else if(media >= 8.0 && media < 9.0){
		printf("\nÓtimo, você ficou com conceito B e foi APROVADO");
	}else if(media >= 9.0 && media <= 10.0){
		printf("\nParabéns, você ficou com conceito A e foi APROVADO");
	}else {
		printf("\nMédia inconsistente!");
	}
	
	return 0;
}
