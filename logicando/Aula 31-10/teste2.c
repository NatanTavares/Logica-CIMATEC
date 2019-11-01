/*	- Uma escola com 200 alunos está realizando um competição que premiará o aluno que obtiver a 
maior média final em todas as disciplinas. Elabore um algoritmo que guarde a média final de todos
 os alunos e mostre a média do aluno campeão.
*/
#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int i, x[199],media,maiorNota, ganhador;
	for(i=0;i<2;i++){
		printf("Entre com a media do aluno %d\n",i+1);
		scanf("%d",&x[i]);
		if(i==0){
			maiorNota = x[0];
			ganhador = 0;
		} else {
			if(maiorNota < x[i]){
				maiorNota = x[i];
				ganhador = i;
			}
		}
	}
	printf("O aluno com maior media foi o %dª com %d pontos\n",i,maiorNota);
}
