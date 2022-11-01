#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int n, x;
	n = 5;
	x = n++;
	printf("N = %i | X = %d", n, x);
	return 0;
}
