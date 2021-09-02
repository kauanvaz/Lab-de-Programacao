#include <stdio.h>
int main(){
	int i, somaPar=0;
	for(i=86; i<907; i++){
		if(i%2 == 0){
			printf("%d  ", i);
			somaPar += i;
		}
	}
	printf("\n");
	printf("Soma = %d\n", somaPar);
	return 0;
}