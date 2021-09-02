#include <stdio.h>
int main(){
	float X, Y, Z;
	printf("Digite os tres lados de um triangulo: ");
	scanf("%f%f%f", &X, &Y, &Z);
	if(X<Y+Z && Y<X+Z && Z<X+Y){
		printf("Eh um triangulo ");
		if(X==Y && X==Z)
			printf("equilatero");
		else if(X==Y || X==Z || Y==Z)
			printf("isosceles");
		else
			printf("escaleno");
	}
	else
		printf("Os lados não formam um triangulo\n");
	return 0;
}