/*	3.Elabore um algoritmo leia um vetor X de 6 valores inteiros.
	Pegue os valores pares do vetor X e jogue no vetor de nome PAR
	Pegue os valore impares do vetor X e jogue no vetor de nome IMPAR
	Depois imprima os vetores PAR e IMPAR.
*/
#include <stdio.h>
main(){
	int x[5],i,par[5],impar[5],contPar=0,contImpar=0;
	for(i=0;i<5;i++){	
		printf("Entre com o valor\n");
		scanf("%d",&x[i]);
		if(x[i]%2==0){  // Par
			par[contPar] = x[i];
			contPar++;
		} else { // Impar
			impar[contImpar] = x[i];
			contImpar++;
		}	
	}
	printf("\nVetor par!\n");
	for(i=0;i<contPar;i++){
		printf("pares %d\n",par[i]);
	}
	printf("\nVetor impar!\n");
	for(i=0;i<contImpar;i++){
		printf("impares %d\n",impar[i]);
	}
}
