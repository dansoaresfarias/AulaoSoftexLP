#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int n = 5;
	printf("\t%i | %i | %i", n, n+1, n--);
	return 0;
}
