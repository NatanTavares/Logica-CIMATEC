// Questões de revisão da primeira prova de escrita em C
#include <stdio.h>
main(){
// 1 - Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo (base*altura).
	float alt,base,area;
	printf("Qual a altura do retangulo?\n");
	scanf("%f",&alt);
	printf("Qual a base do retangulo?\n");
	scanf("%f",&base);
	area = (alt * base);
	printf("A area do retangulo e igual a %.2f",area);

// 2 - Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.
	int votoBranco, votoNulo, votoValido, totalVoto;
	printf("Quantos foram o os votos brancos?\n");
	scanf("%d",&votoBranco);
	printf("Quantos foram o os votos nulos?\n");
	scanf("%d",&votoNulo);
	printf("Quantos foram o os votos validos?\n");
	scanf("%d",&votoValido);
	totalVoto = (votoBranco + votoNulo + votoValido);
	votoBranco = ((votoBranco * 100) / totalVoto); 
	votoNulo =  ((votoNulo * 100) / totalVoto);
	votoValido = ((votoValido * 100) / totalVoto);
	printf("O numero de eleitores foi: %d\n", totalVoto);
	printf("Votos brancos: %d por cento\n",votoBranco);
	printf("Votos nulos: %d por cento\n",votoNulo);
	printf("Votos validos: %d por cento\n",votoValido);

// 3- Faça um algoritmo que leia dois valores inteiros (X e Y) e apresente o resultado do quadrado da soma dos valores lidos.
	int x, y, soma2;
	printf("Valor de x\n");
	scanf("%d",&x);
	printf("Valor de y\n");
	scanf("%d",&y);
	soma2 = (x+y) * (x+y); 
	printf("O resultado do quadrado da soma é: %d", soma2);

// 4-Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo.
	
	int num;
	printf("Digite um valor\n");
	scanf("%d",&num);
	if(num % 2 == 0){ // PAR
		if(num > 0){ // POSITIVO
			printf("Par e positivo");
		} else { // NEGATIVO
			printf("Par e negativo");
		}
	} else { // IMPAR
		if(num > 0){ // POSITVO
			printf("Impar e positivo");
		} else { // NEGATIVO
			printf("Impar e negativo");
		}
	}

/*	5-João Pescador comprou um microcomputador para controlar o rendimento diário de
seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo
regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$
4,00 por quilo excedente. João precisa que você faça um algoritmo que leia a variável P
(peso de peixes) e verifique se há excesso. Se houver, gravar na variável E (Excesso) e na
variável M o valor da multa que João deverá pagar. Caso contrário mostrar tais variáveis
com o conteúdo ZERO. */
	int p,e;
	float m;
	printf("Quantos kilos foi pescado?\n");
	scanf("%d",&p);
	if(p > 50){
		e = (p - 50);
		m = (e * 4);
		printf(" Execesso: %d kilos \n Multa: %.2f reais\n", e,m);
	} else {
		e = 0;
		m = 0;
		printf(" Execesso: %d\n Multa: %.2f\n",e,m);
	}


/* 7-Faça um algoritmo para ler um número que é um código de usuário. Caso este
código seja diferente de um código armazenado internamente no algoritmo (igual a 1234)
deve ser apresentada a mensagem ‘Usuário inválido!’. Caso o Código seja correto, deve
ser lido outro valor que é a senha. Se esta senha estiver incorreta (a certa é 9999) deve ser
mostrada a mensagem ‘Acesso negado’. Caso a senha esteja correta, deve ser mostrada a
mensagem ‘Acesso permitido’.*/

int code,senha;
printf("Digite o codigo\n");
scanf("%d",&code);
if(code == 1234){
	printf("Senha\n");
	scanf("%d",&senha);
	if(senha == 9999){
		printf("Acesso permitido");
	}else{
		printf("Acesso negado");
	}
}else{
	printf("Usuario invalido!");	
}

}
