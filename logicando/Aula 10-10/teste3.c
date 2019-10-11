#include <stdio.h>
main(){
	int number, opc;
	printf("Digite um valor\n");
	scanf("%d",&number);
	printf("==================\n");
	printf("Escolha a operacao\n");
	printf("1 - DOBRO\n");
	printf("2 - TRIPLO\n");
	printf("3 - CUBO\n");
	printf("4 - ANTECESSOR\n");
	printf("5 - SUCESSOR\n");
	printf("==================\n");
	scanf("%d",&opc);
	if(number == 1){
		switch(opc){
		case 1: // dobro
			printf("O dobro de 1 e igual a 2");
			break;
		case 2: // triplo
			printf("O triplo de 1 e igual a 3");
			break;
		case 3: // cubo
			printf("O cubo de 1 e igual a 1");
			break;
		case 4: // antecessor
			printf("O antecessor de 1 e igual a 0");
			break;
		case 5: // sucessor
			printf("O sucessor de 1 e igual a 2");
			break;
		default:
			printf("Teste outro numero agora!");
		}
	} else {
		switch(opc) {
		case 1: // dobro
			printf("O dobro de %d e igual a %d",number,(number*2));
			break;
		case 2: // triplo
			printf("O triplo de %d e igual a %d",number,(number*3));
			break;
		case 3: // cubo
			printf("O cubo de %d e igual a $d",number,(number*number));
			break;
		case 4: // antecessor
			printf("O antecessor de %d e igual a %d",number,(number-1));
			break;
		case 5: // sucessor
			printf("O sucessor de %d e igual a %d",number,(number+1));
			break;
		default:
			printf("Teste outro numero agora!");
		}
	}
}
