#include <stdio.h>
main(){
	int op,number;
	float lado,altura;
	printf("Escolha a operacao a ser realizada\n");
	printf("1 - area do quadrado\n");
	printf("2 - area do tringulo\n");
	printf("3 - area do retangulo\n");
	printf("4 - cubo de um numero\n");
	printf("==================================\n");
	scanf("%d",&op);
	printf("==================================\n");
	switch(op){
		case 1:
			printf("Digite o lado do quadrado\n");
			scanf("%f",&lado);
			printf("A area do quadrado e: %.2f",(lado*lado));
			break;
		case 2:
			printf("Digite a base do triangulo\n");
			scanf("%f",&lado);
			printf("Digite a altura do triangulo\n");
			scanf("%f",&altura);
			printf("A area do triangulo e: %.2f",(lado*altura));
			break;
		case 3:
			printf("Digite o lado do retangulo\n");
			scanf("%f",&lado);
			printf("Digite a altura do retangulo\n");
			scanf("%f",&altura);
			printf("A area do retangulo e: %.2f",(lado*altura));
			break;
		case 4:
			printf("Digite um valor\n");
			scanf("%d",&number);
			printf("%d ao cubo e igual a: %d",number,(number*number*number));
			break;
		default:
			printf("ERROR");
	}
}
