#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float num1, num2;
	char op; // - + * /
	
	printf("\t.:: Calculadora If Else da Softex ::.\n\n");
	printf("Digite um n�merio, operador, e outro n�mero (Exp. 5 - 2): ");
	scanf("%f %c %f", &num1, &op, &num2);
	
	switch (op){
		case '+':
			printf("\n %.2f %c %.2f = %.2f", num1, op, num2, num1+num2);
			break;
		case '-':
			printf("\n %.2f %c %.2f = %.2f", num1, op, num2, num1-num2);
			break;
		case '*':
		case '.':
			printf("\n %.2f %c %.2f = %.2f", num1, op, num2, num1*num2);
			break;
		case '/' :
		case ':':
			printf("\n %.2f %c %.2f = %.2f", num1, op, num2, num1/num2);
			break;
		default:
			printf("\nOperador invalido!");
	}
		
	return 0;
}
