#include <stdio.h>
main(){
	int num, num2, op;
	printf("Digite um valor\n");
	scanf("%d",&num);
	printf("Digite outro valor\n");
	scanf("%d",&num2);
	printf("================\n");
	printf("1 - Soma\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	printf("================\n");
	scanf("%d",&op);
	printf("================\n");
	switch(op){
		case 1:
			printf("Resultado da Soma: %d",(num+num2));
			break;
		case 2:
			printf("Resultado da Subtracao: %d",(num-num2));
			break;
		case 3:
			printf("Resultado da Multiplicacao: %d",(num*num2));
			break;
		case 4:
			printf("Resultado da Divisao: %d",(num/num2));
			break;
		default:
			printf("Operacao nao indefinida");
	}
}
