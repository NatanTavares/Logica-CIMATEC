/*	3. Fazer um algoritmo que leia uma matriz inteira de ordem 6x6 e imprima a soma apenas dos números que possuam índices diferentes	*/
#include <stdio.h>
main(){
	int linha, coluna;
	int somaMatriz = 0;
	int matriz[6][6];
	
	for(linha = 0;linha < 6;linha++){
		for(coluna = 0;coluna < 6;coluna++){
			printf("Entre com o valor\n");
			scanf("%d",&matriz[linha][coluna]);
		}
	}
	
	for(linha = 0;linha < 6;linha++){
		for(coluna = 0;coluna < 6;coluna++){
			if(linha != coluna){
				somaMatriz = somaMatriz + matriz[linha][coluna];
			}
		}
	}
	
	printf("A soma dos valores de indice diferentes dessa matriz foi: %d",somaMatriz);
}
