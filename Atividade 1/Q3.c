#include <stdio.h>
int main(){
	int x, y, produto=1;
	printf("Digite um valor: ");
	scanf("%d", &x);
	y=x;
	while(y>0){
		produto*=y;
		y--;
	}
	printf("%d! = %d", x, produto);
	return 0;
}