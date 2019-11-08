/*	2. Fazer um algoritmo que leia uma matriz inteira de ordem 6x6 e imprima apenas os números que possuam índices iguais.	*/
#include <stdio.h>
main(){
	int linha, coluna;
	int matriz[6][6];
	
	for(linha = 0;linha < 6;linha++){
		for(coluna = 0;coluna < 6;coluna++){
			printf("Entre com o valor\n");
			scanf("%d",&matriz[linha][coluna]);
		}
	}
	
	printf("		Matriz");
	
	for(linha=0;linha<6;linha++){
		printf("\n");
		for(coluna=0;coluna<6;coluna++){
			printf("%d\t",matriz[linha][coluna]);
		}
	}
	
	printf("\n\n	Valores de indices iguais\n");
	
	for(linha = 0;linha < 6;linha++){
		for(coluna = 0;coluna < 6;coluna++){
			if(linha == coluna){ 
				printf("%d\t",matriz[linha][coluna]);
			}
		}
	}
}
