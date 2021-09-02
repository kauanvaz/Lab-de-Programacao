#include <stdio.h>
int main(){
	char op;
	int cont=0;
	printf("Responda as seguintes perguntas com S para sim e N para nao: \n");
	printf("Telefonou para a vitima?\n");
	do{
		scanf(" %c", &op);
	    switch(op){
		   case 'S':
			    cont++;
			    break;
		   case 'N':
		    	break;
		   default:
			printf("Opcao invalida. Digite novamente: ");
	    }
	}while(op!='S' && op!='N');
	printf("Esteve no local do crime?\n");
	do{
		scanf(" %c", &op);
	    switch(op){
		   case 'S':
			    cont++;
			    break;
		   case 'N':
		    	break;
		   default:
			printf("Opcao invalida. Digite novamente: ");
	    }
	}while(op!='S' && op!='N');
	printf("Mora perto da vitima?\n");
	do{
		scanf(" %c", &op);
	    switch(op){
		   case 'S':
			    cont++;
			    break;
		   case 'N':
		    	break;
		   default:
			printf("Opcao invalida. Digite novamente: ");
	    }
	}while(op!='S' && op!='N');
	printf("Devia para a vitima?\n");
	do{
		scanf(" %c", &op);
	    switch(op){
		   case 'S':
			    cont++;
			    break;
		   case 'N':
		    	break;
		   default:
			printf("Opcao invalida. Digite novamente: ");
	    }
	}while(op!='S' && op!='N');
	printf("Ja trabalhou com a vitima?\n");
	do{
		scanf(" %c", &op);
	    switch(op){
		   case 'S':
			    cont++;
			    break;
		   case 'N':
		    	break;
		   default:
			printf("Opcao invalida. Digite novamente: ");
	    }
	}while(op!='S' && op!='N');
	if(cont<2)
		printf("Inocente");
	else if(cont==2)
		printf("Suspeita\n");
	else if(cont==3 || cont==4)
		printf("Cumplice");
	else
		printf("Assassino");
	return 0;
}