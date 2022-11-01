#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int x = 5;
	printf("%i | %i", ++x, x++);	
	return 0;
}
