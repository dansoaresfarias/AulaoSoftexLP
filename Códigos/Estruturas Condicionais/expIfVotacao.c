#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	if(idade < 16){
		printf("Voc� � muito novo pra votar! Infelizmente n�o pode votar agora!");
	}
	
	return 0;
}
