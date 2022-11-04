#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i;	
	
	printf("    .:: Tabuada de 7 ::.");
	for(i = 1 ; i <= 10 ; i++){
		printf("\n\t7 X %2d = %d", i, 7*i);
	}
	
	return 0;
}
