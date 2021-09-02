#include <stdio.h>
int main(){
	int a, b, i, p=0;
	
	printf("Digite dois numeros: ");
	scanf("%d%d", &a, &b);
	
	for(i=0; i<b; i++){
		p += a;
	}
	
	printf("%d * %d = %d\n", a, b, p);
	return 0;
}