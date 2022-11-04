#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, j;	
	
	for(j = 1 ; j <= 10 ; j++){
		printf("    .:: Tabuada de %d ::.", j);
		for(i = 1 ; i <= 10 ; i++){
			printf("\n\t%2d X %2d = %d", j, i, j*i);
		}
		printf("\n\n");
	}
	
	return 0;
}
