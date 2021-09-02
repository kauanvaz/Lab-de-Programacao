#include <stdio.h>
int main(){
	int i, x;
	float H=0;
	
	for(i=1; i<=10; i++){
		x = i;
		if(x%2 != 0){
			H += (float)x/(x*x);
		}
		else{
			H -= (float)x/(x*x);
		}
		
	}
	
	printf("%.2f", H);
	return 0;
}