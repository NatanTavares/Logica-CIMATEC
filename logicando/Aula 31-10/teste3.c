/*	2- Implementar um algoritmo que leia 150 notas de provas e:
calcule a m�dia das notas;
calcule quantas notas est�o acima da m�dia (M�dia de aprova��o: 7,0);
*/
#include <stdio.h>
main(){
	int i, passou=0;
	float totalNotas=0, x[149];
	for(i=0;i<3;i++){
		printf("Entre com a nota do aluno %d\n", i+1);
		scanf("%f",&x[i]);
		totalNotas =(totalNotas + x[i]);
		if(x[i]>7){ // notas acima da m�dia
			passou++;
		}
	}
	printf("A media das notas foi: %f.1\n",totalNotas/i);
	printf("%f.1 alunos estao acima da media\n", passou);
	
}
