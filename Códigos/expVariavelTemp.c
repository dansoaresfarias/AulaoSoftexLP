#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float tempC, tempK, tempF;
	
	printf("Informe a temperatura em °C: ");
	scanf("%f", &tempC);
	
	tempK = tempC + 273.15;
	tempF = (tempC * 9/5) + 32.0;
	
	printf("\n\t%.2f°C | %.2f°F | %.2f°K\n\n", tempC, tempF, tempK);
}
