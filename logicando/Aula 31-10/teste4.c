#include <stdio.h>
main(){
	int x[9], i, value, position = 99;
	for(i=0;i<10;i++){
		printf("Digite os valores do vetor\n"); // construção do vetor
		scanf("%d",&x[i]);
	}
	printf("Digite um valor para ser buscado dentro do vetor\n");
	scanf("%d",&value);
	for(i=0;i<10;i++){
		if(x[i] == value){
			position= i;
		}
	}
	if(position != 99){
		printf("O valor %d foi encontrado na posicao %d\n",value, position);
	} else {
		printf("O valor %d não foi encontrado nesse vetor!\n",value);
	}
}
