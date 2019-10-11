#include <stdio.h>
main(){
	int opc;
	printf("===========================\n");
	printf("         Tradutor\n");
	printf("===========================\n");
	printf("Escolha a opcao desejada\n");
	printf("1 - Cao\n");
	printf("2 - Gato\n");
	printf("3 - Peixe\n");
	printf("4 - Mesa\n");
	printf("5 - Janela\n");
	printf("6 - Passaro\n");
	printf("===========================\n");
	scanf("%d",&opc);
	printf("===========================\n");
	switch(opc){
		case 1:
			printf("Dog");
			break;
		case 2:
			printf("Cat");
			break;
		case 3:
			printf("Fish");
			break;
		case 4:
			printf("Desk");
			break;
		case 5:
			printf("Window");
			break;
		case 6:
			printf("Bird");
			break;
		default:
			printf("ERROR");
	}	
}
