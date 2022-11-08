#define PI 3.141592

float compEsfera(float raio){
	return 2 * raio * PI;
}

float areaEsfera(float raio){
	return 4 * PI * raio * raio;
}

float volumeEsfera(float raio){
	return (PI * raio * raio * raio) * 4/3;
}
