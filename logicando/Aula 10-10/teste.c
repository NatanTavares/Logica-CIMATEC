#include <stdio.h>
main(){
	int mes;
	printf("Digite o valaor\n");
	scanf("%d",&mes);
	switch(mes){
		case 1:
			printf("jan");
		break;
		case 2:
			printf("fev");
		break;
		case 3:
			printf("mar");
		break;
		case 4:
			printf("abr");
		break;
		case 5:
			printf("mai");
		break;
		case 6:
			printf("jun");
		break;
		case 7:
			printf("jul");
		break;
		case 8:
			printf("ago");
		break;
		case 9:
			printf("set");
		break;
		case 10:
			printf("out");
		break;
		case 11:
			printf("nov");
		break;
		case 12:
			printf("dez");
		break;
		default:
			printf("Não ha mes correspondente");
	}
}
