#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%.2f", &idade);
	
	if(idade < 16){
		printf("Voc� � muito novo pra votar! Infelizmente n�o pode votar agora!");
	}else if(idade >= 16 && idade < 18){
		printf("Parab�ns, voc� tem idade para votar, retire seu t�tulo e boa vota��o!");
	}else if(idade >= 18 && idade < 65){
		printf("Ol�, voc� � obrigado a votar!");
	}else {
		printf("Oi, voc� n�o tem mais obriga��o em votar, por�m ficaremos felizes em lhe ver votando!");
	}
	
	return 0;
}
