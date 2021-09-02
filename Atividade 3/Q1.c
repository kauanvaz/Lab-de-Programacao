#include <stdio.h>

void soma (int a, int b){
	printf("Soma = %d\n", a+b); 
}

void subtracao (int a, int b){
	printf("Subtracao = %d\n", a-b); 
}

void multiplicacao (int a, int b){
	printf("Multiplicacao = %d\n", a*b); 
}

void divisao (int a, int b){
	if(b!=0){
		printf("Divisao = %.2f\n", (float)a/b); 
	}
	else{
		printf("Indeterminacao\n");// O denominador sendo 0 torna a operação impossível
	}

}

void potencia (int a, int b){
	int resultado = 1, i;
	for(i=0; i<b; i++){
		resultado *= a;
	}
	printf("Resultado = %d", resultado);
}


int main(){
	int a, b;
	printf("Digite dois numeros: ");
	scanf("%d%d", &a, &b);
	soma (a, b);
	subtracao(a, b);
	multiplicacao(a, b);
	divisao(a, b);
	potencia(a, b);
	return 0;
}