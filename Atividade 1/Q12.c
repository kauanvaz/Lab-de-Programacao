#include <stdio.h>
int main(){
	int i, N, x=0;
	float A;
	
	printf("Forneca um valor N: ");
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		A += (N - x)/(i*1.0);
		x++;
	}
	
	printf("%.2f", A);
	
	return 0;
}