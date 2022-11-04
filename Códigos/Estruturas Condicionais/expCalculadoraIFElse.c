#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float num1, num2;
	char op; // - + * /
	
	printf("\t.:: Calculadora If Else da Softex ::.\n\n");
	printf("Digite um númerio, operador, e outro número (Exp. 5 - 2): ");
	scanf("%f %c %f", &num1, &op, &num2);
	
	if(op == '+'){
		printf("\n %.2f %c %.2f = %.2f", num1, op, num2, num1+num2);
	}else if(op == '-'){
		printf("\n %.2f %c %.2f = %.2f", num1, op, num2, num1-num2);
	}else if(op == '*'){
		printf("\n %.2f %c %.2f = %.2f", num1, op, num2, num1*num2);
	}else if(op == '.'){
		printf("\n %.2f %c %.2f = %.2f", num1, op, num2, num1*num2);
	}else if(op == ':'){
		printf("\n %.2f %c %.2f = %.2f", num1, op, num2, num1/num2);
	}else if(op == '/'){
		printf("\n %.2f %c %.2f = %.2f", num1, op, num2, num1/num2);
	}else{
		printf("\nOperado inválido!");
	}
	
	return 0;
}
