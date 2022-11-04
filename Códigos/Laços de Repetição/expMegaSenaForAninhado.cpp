#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, j;
	
	// x % 60 => (0, 1, ..., 58, 59) + 1  => 1 a 60
	
	for(j = 0 ;  ; j++){
		for(i = 0 ; i < 6 ; i++){
			printf("%d  " , (rand()%60) + 1);
		}
		printf("\n");
	}
	
	return 0;
}
