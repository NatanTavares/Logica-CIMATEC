#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
// 							Aprendendo if-else (SE-SENAO) 
/* 		Estrutura base 
	if(){
		printf("");
	} else {
		printf("");
	}
*/
////////////////////////////////////////////////////////////////////////////
		primeiro exemplo

//
	int x,y;
	printf("digite o primeiro valor\n");
	scanf("%d",&x);
	printf("digite outro valor\n");
	scanf("%d",&y);
	
	if(x>y){
		printf("O maior : %d", x);
	} else{
		if(x<y){
			printf("O maior : %d",y);
		} else {
			printf("Iguais");
		}
	}

////////////////////////////////////////////////////////////////////////////
	
//		Primeira atividade em C ultilizando if-else

	int n1,n2,total;
	printf("Digite o primeiro valor\n");
	scanf("%d",&n1);
	printf("Digite o segundo valor\n");
	scanf("%d",&n2);
	total = (n1 + n2);
	if(total%2==0){
		printf("par");
	} else {
		printf("Impar");
	}

/////////////////////////////////////////////////////////////////////////////

//		Segunda atividade em c ultilizando if-else

	int num1, num2;
	printf("Digite o primeiro número\n");
	scanf("%d",&num1);
	printf("Digite o segundo número\n");
	scanf("%d",&num2); 
	num1 = (num1 * 4);
	num2 = (num2 * 3);
	printf("O primeiro valor multiplicado por 4: %d\n",num1);
	printf("O segundo valor multiplicado por 3: %d\n",num2);

/////////////////////////////////////////////////////////////////////////////

//		Terceira atividade em c ultilizando if-else
int num;

	printf("Digite um número\n");
	scanf("%d",&num);
	if(num < 0){
		printf("Número negativo");
	} else {
		printf("Número par");
	}

}

