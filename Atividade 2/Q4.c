#include <stdio.h>
#include <string.h>
#define MAX 10
int main(){
	char c[22] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
	char vet[MAX];
	int consoante=0, cont, i, j;
	printf("Digite uma palavra: ");
	scanf("%s", vet);
	cont = strlen(vet);
	
	for(i=0; i<cont; i++){
		for(j=0; j<22; j++){
	    	if(vet[i]==c[j]){
		    	consoante++;
			    printf("%c ", vet[i]);
		}
		}
	}
	printf("\n");
	
	printf("Quantidade de consoantes = %d", consoante);
	
	return 0;
}