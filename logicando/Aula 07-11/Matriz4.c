/*	4. Elabore um algoritmo que leia uma matriz 5x5 e mostre a quantidade dos números pares e impares */
#include <stdio.h>
main(){
	int linha, coluna;
	int par = 0, impar = 0;
	int matriz[5][5];
	
	for(linha = 0;linha < 5;linha++){ // Entrada de dados para a matriz
		for(coluna = 0;coluna < 5;coluna++){
			printf("Entre com o valor\n");
			scanf("%d",&matriz[linha][coluna]);
		}
	}
	
	for(linha = 0;linha < 5; linha++){
		for(coluna = 0;coluna < 5; coluna++){
			if(matriz[linha][coluna] % 2 == 0){ // Valores pares.
				par++;
			} else { // Valores impares
				impar++;
			}
		}
	}
	
	printf("Valores pares: %d\nValores impares: %d",par,impar);
}
