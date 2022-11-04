#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%.2f", &idade);
	
	if(idade < 16){
		printf("Você é muito novo pra votar! Infelizmente não pode votar agora!");
	}else if(idade >= 16 && idade < 18){
		printf("Parabéns, você tem idade para votar, retire seu título e boa votação!");
	}else if(idade >= 18 && idade < 65){
		printf("Olá, você é obrigado a votar!");
	}else {
		printf("Oi, você não tem mais obrigação em votar, porém ficaremos felizes em lhe ver votando!");
	}
	
	return 0;
}
