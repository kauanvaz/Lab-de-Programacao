#include <stdio.h>
void menu(){// Menu com as opcoes de converçao
	printf("1 - Decimal para binario\n");
	printf("2 - Decimal para octal\n");
	printf("3 - Decimal para hexadecimal\n");
	printf("4 - Binario para decimal\n");
	printf("5 - Binario para octal\n");
	printf("6 - Binario para hexadecimal\n");
	printf("7 - Octal para binario\n");
	printf("8 - Octal para decimal\n");
	printf("9 - Octal para hexadecimal\n");
	printf("10 - Hexadecimal para binario\n");
	printf("11 - Hexadecimal para octal\n");
	printf("12 - Hexadecimal para decimal\n");
	printf("0 - Sair\n");
}

int potencia (int a, int b){
	int resultado = 1, i;
	for(i=0; i<b; i++){
		resultado *= a;
	}
	return resultado;
}

int valor_hex(int p){
	int x;
	if(p == 'A'){
	x = 10;
	}
	else if(p == 'B'){
		x = 11;
	}
	else if(p == 'C'){
		x = 12;
	}
	else if(p == 'D'){
		x = 13;
	}
	else if(p == 'E'){
		x = 14;
	}
	else if(p == 'F'){
		x = 15;
	}
	else
		x = p;
	
	return x;	
}

int dec_bin(int N){
	int resto;
    int bin = 0;
    int k = 1;

    while(N!=0){
        resto = N%2;
        N /= 2;
        bin += resto*k;
        k *= 10;
    }
    return bin;
}

int dec_oct(int N){
	int resto;
    int oct = 0;
    int k = 1;

    while(N!=0){
        resto = N%8;
        N /= 8;
        oct += resto*k;
        k *= 10;
    }
    return oct;
}

/*void dec_hex(int N){
	int resto;
    int hex = 0;
    int k = 1;

    while(N!=0){
        resto = N%16;
        N /= 16;
        hex += resto*k;
        k *= 10;
    }
    printf("%d\n", hex);
}*/

int bin_dec(int N){
	int R, dec=0, cont=0, i, x=1, Q, y, aux;
	aux = N;
	do{
		Q = aux/10;
		aux = Q;
		cont++;
	}while(Q!=0);
	
    for(i=0; i<=cont; i++){
    	y = potencia(10,i);
        R = (N%(10*y))/y;
		x = potencia(2,i);
		dec += R*x;
    }
		
    return dec;
}

int bin_oct(int N){
	int x, oct;
    x = bin_dec(N);
	oct = dec_oct(x);	
    return oct;
}

int oct_dec(int N){
	int R, dec=0, cont=0, i, x=1, Q, y, aux;
	aux = N;
	do{
		Q = aux/10;
		aux = Q;
		cont++;
	}while(Q!=0);
	
    for(i=0; i<=cont; i++){
    	y = potencia(10,i);
        R = (N%(10*y))/y;
		x = potencia(8,i);
		dec += R*x;
    }
		
    return dec;
}

int oct_bin(int N){
	int x, bin;
	x = oct_dec(N);
	bin = dec_bin(x);
    return bin;
}

/*void hex_bin(int N){
	int aux, y, R, v, Q, cont, i;
	aux = N;
	do{
		Q = aux/10;
		aux = Q;
		cont++;
	}while(Q!=0);
	
	for(i=0; i<cont; i++){
		y = potencia(10,i);
        R = (N%(10*y))/y;
        v = valor_hex(R);
        printf("%d", dec_bin(v));
	}

}*/

int main(){
	int N, op;
	printf("Digite um numero e, em seguida, a transformacao de base desejada: ");
	scanf("%d", &N);
    do{
    	menu();
    	scanf("%d", &op);
    	switch(op){
			case 1:
				printf("%d em binario = %d\n",N, dec_bin(N));
				break;
			case 2:
				printf("%d em octal = %d\n", N, dec_oct(N));
				break;
			case 3:
			//	dec_hex(N);
				break;
			case 4:
				printf("%d em decimal = %d\n", N, bin_dec(N));
				break;
			case 5:
				printf("%d em octal = %d\n", N, bin_oct(N));
				break;
			case 6:
			//	bin_hex(N);
				break;
			case 7:
				printf("%d em binario = %d\n", N, oct_bin(N));
				break;
			case 8:
				printf("%d em decimal = %d\n", N, oct_dec(N));
				break;
			case 9:
			//	oct_hex(N);
				break;
			case 10:
			//	hex_bin(N);
				break;
			case 11:
			//	hex_oct(N);
				break;
			case 12:
			//	hex_dec(N);
				break;
			case 0:
				printf("Fim!");
				break;
			default:
				printf("Opcao invalida! Digite novamente: \n");
				break;
		}
	}while(op!=0);
	
	return 0;
}