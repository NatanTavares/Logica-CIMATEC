#include <locale.h> <stdio.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
		//	primeira questão - var
		
				
	int idade = 5;
	float saldo = 3.5;
	char nome = 'N', nomeCompleto[40]="Natan tavares dos Santos"; 
		
	printf("O valor de x: %d \n", idade);
	printf("Seu saldo atual é: %.2f \n", saldo);
	printf("Seu nome completo é: %s \n", sobrenome);
	printf("Seu nome começa com: %c \n", nome);
	printf("aperte alt + f4 para SAIR ");
	
	
		//	Segunda questão - operações com var
			
	int x=10, y=5, z;
	z=(x+y);
	printf("Soma: %d\n",z);
		
	z=(x-y);
	printf("Subtração: %d\n",z);
		
	z=(x*y);
	printf("Multiplicação: %d\n",z);
		
	z=(x/y);
	printf("Divisão: %d\n",z);
		
	z=(x%y);
	printf("O resto da divisão é: %d\n",z);
	
	
		// Terceira questão - operação de soma lendo os valores 
	int x,y;
	
	printf("Digite dois valor\n");
	scanf("%d""%d",&x,&y);
	
	printf("Resultado: %d",x+y);
	
}
