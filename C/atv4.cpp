#include <stdio.h>

int main()
{
	float bMaior, bMenor, alt, area;
	
	printf("Entre com a bese maior, base menor, altura RESPECTIVAMENTE \n");
	scanf("%f%f%f", &bMaior, &bMenor, &alt);
	
	area = ((bMaior+bMenor)*alt)/2;
	
	printf("Area do trapezio; %.2f ", area);
	
}
