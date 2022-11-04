#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int y = 2, w = 4, x = 5, z = 0, t = 7;
	w -= x; // w = w - (x) --> w = 4 -5 = -1
	z += y; // z = z + (y) | caso o z não for inicializado --> z = z + (y) ==> z = ?? + 2
	x *= y + 3; // x = x * (y+3) --> x = 5 * (2+3) = 5 * 5 = 25
	y /= w + 3; // y = y / (w+3) --> y = 2 / (-1+3) = 2 / 2 = 1
	t %= z; // t = t % z --> t = 7 % 2 = 1
	
	printf("\t y = %.2f | w = %.2f | x = %.2f | z = %.2f | t = %.2f \n", y, w, x, z, t);
	return 0;
}
