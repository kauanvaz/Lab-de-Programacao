#include <stdio.h>
#define MAX 10

void primo (int K[MAX], int P[MAX], int *contP){
	int i, j, cont=0, a;
	a = *contP;
	a = 0;
	for(i=0; i<MAX; i++){
		for(j=2; j<=K[i]/2; j++){
			if(K[i]%j == 0 && K[i]!=2){
				cont++;
				break;
			}
		}
		if(K[i]!=1 && cont == 0){
			P[a] = K[i];
			a++;
		}
        cont=0;
	}
	*contP = a;
}

int main(){
	int i, K[MAX], P[MAX], contP;
	printf("Digite %d numeros inteiros e positivos: ", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &K[i]);
	}
	primo(K, P, &contP);
	for(i=0; i<contP; i++){
		printf("%d  ", P[i]);
	}
	return 0;
}