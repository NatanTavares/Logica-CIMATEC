#include <locale.h> <stdio.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
		//	primeira quest�o - var
		
				
	int idade = 5;
	float saldo = 3.5;
	char nome = 'N', nomeCompleto[40]="Natan tavares dos Santos"; 
		
	printf("O valor de x: %d \n", idade);
	printf("Seu saldo atual �: %.2f \n", saldo);
	printf("Seu nome completo �: %s \n", sobrenome);
	printf("Seu nome come�a com: %c \n", nome);
	printf("aperte alt + f4 para SAIR ");
	
	
		//	Segunda quest�o - opera��es com var
			
	int x=10, y=5, z;
	z=(x+y);
	printf("Soma: %d\n",z);
		
	z=(x-y);
	printf("Subtra��o: %d\n",z);
		
	z=(x*y);
	printf("Multiplica��o: %d\n",z);
		
	z=(x/y);
	printf("Divis�o: %d\n",z);
		
	z=(x%y);
	printf("O resto da divis�o �: %d\n",z);
	
	
		// Terceira quest�o - opera��o de soma lendo os valores 
	int x,y;
	
	printf("Digite dois valor\n");
	scanf("%d""%d",&x,&y);
	
	printf("Resultado: %d",x+y);
	
}
