/*	- Uma escola com 200 alunos est� realizando um competi��o que premiar� o aluno que obtiver a 
maior m�dia final em todas as disciplinas. Elabore um algoritmo que guarde a m�dia final de todos
 os alunos e mostre a m�dia do aluno campe�o.
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
	printf("O aluno com maior media foi o %d� com %d pontos\n",i,maiorNota);
}
