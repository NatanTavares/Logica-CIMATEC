/*	1. Fazer um algoritmo que leia uma matriz inteira de ordem 4x4 e verifique se a soma dos elementos das diagonais são iguais.	*/
#include <stdio.h>
main(){
	int linha, coluna;
	int matriz[4][4], somaUm, somaDois;
	
	for(linha = 0;linha < 4;linha++){
		for(coluna = 0;coluna < 4;coluna++){
			printf("Entre com o valor\n");
			scanf("%d",&matriz[linha][coluna]);
		}
	}
	
	printf("	Matriz");
	
	for(linha = 0;linha < 4;linha++){
		printf("\n");
		for(coluna = 0;coluna < 4;coluna++){
			printf("%d\t",matriz[linha][coluna]);
		}
	}
	
	for(linha = 0;linha < 4;linha++){ // soma das diagonais
		for(coluna = 0;coluna < 4;coluna++){
			if(linha == coluna){
				somaUm = somaUm + matriz[linha][coluna];
			}
			if(linha + coluna == 3){
				somaDois = somaDois + matriz[linha][coluna];
			}
		}
	}
	
	if(somaUm == somaDois){
		printf("\n	Valores iguais");
	} else {
		printf("\n	Valores diferentes");
	}
}
