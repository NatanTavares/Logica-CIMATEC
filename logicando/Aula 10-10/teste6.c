#include <stdio.h>
main(){
	float valor;
	int vezes;
	printf("Preco da compra\n");
	scanf("%f",&valor);
	printf("=================\n");
	printf("Quantas prestacoes?\n");
	printf("5 - 5 vezes\n");
	printf("10 - 10 vezes\n");
	printf("12 - 12 vezes\n");
	printf("24 - 24 vezes\n");
	printf("=================\n");
	scanf("%d",&vezes);
	printf("=================\n");
	switch(vezes){
		case 5:
			printf("Em 5 presta�oes de: %.2f \n",(valor/5));
			break;
		case 10:
				printf("Em 10 presta�oes de: %.2f \n",(valor/10));
			break;
		case 12:
				printf("Em 12 presta�oes de: %.2f \n",(valor/12));
			break;
		case 24:
			printf("Em 24 presta�oes de: %.2f \n",(valor/24));
			break;
		default:
			printf("Prestacoes indisponiveis");
	}
}
