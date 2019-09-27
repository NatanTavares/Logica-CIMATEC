//Questão 4 aula 24/09 - Elabore um algoritimo que leia 3 valores inteiros e diga qual dos 3 é o menor.
#include <stdio.h>
main(){
	int menor, n2, n3;
	printf("digite um valor\n");
	scanf("%d",&menor);
	printf("digite um valor\n");
	scanf("%d",&n2);
	printf("digite um valor\n");
	scanf("%d",&n3);
	if(n2 < menor){
		menor = n2;
	} else {
		menor = menor;
	}
	if(n3 < menor){
		menor = n3;
	} else {
		menor = menor;
	}
	printf("O menor numero digitado foi: %d", menor);
}
