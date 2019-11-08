/*	5.Elabore um algoritmo que leia uma matriz 4x4 e mostre a soma dos valores maiores que 10	*/
#include <stdio.h>
main(){
	int linha, coluna;
	int maior10 = 0;
	int matriz[4][4];
	
	for(linha = 0;linha < 4; linha++){
		for(coluna = 0; coluna < 4;coluna++){
			printf("Entre com o valor\n");
			scanf("%d",&matriz[linha][coluna]);
			if(matriz[linha][coluna] > 10){
				maior10 = maior10 + matriz[linha][coluna];
			}
		}
	}
	
	printf("\nA soma dos numeros maiores que 10 foi: %d", maior10);
}
