// Quest�es de revis�o da primeira prova de escrita em C
#include <stdio.h>
main(){
// 1 - Escreva um algoritmo para ler as dimens�es de um ret�ngulo (base e altura), calcular e escrever a �rea do ret�ngulo (base*altura).
	float alt,base,area;
	printf("Qual a altura do retangulo?\n");
	scanf("%f",&alt);
	printf("Qual a base do retangulo?\n");
	scanf("%f",&base);
	area = (alt * base);
	printf("A area do retangulo e igual a %.2f",area);

// 2 - Escreva um algoritmo para ler o n�mero total de eleitores de um munic�pio, o n�mero de votos brancos, nulos e v�lidos. Calcular e escrever o percentual que cada um representa em rela��o ao total de eleitores.
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

// 3- Fa�a um algoritmo que leia dois valores inteiros (X e Y) e apresente o resultado do quadrado da soma dos valores lidos.
	int x, y, soma2;
	printf("Valor de x\n");
	scanf("%d",&x);
	printf("Valor de y\n");
	scanf("%d",&y);
	soma2 = (x+y) * (x+y); 
	printf("O resultado do quadrado da soma �: %d", soma2);

// 4-Fa�a um algoritmo que leia um n�mero inteiro e mostre uma mensagem indicando se este n�mero � par ou �mpar, e se � positivo ou negativo.
	
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

/*	5-Jo�o Pescador comprou um microcomputador para controlar o rendimento di�rio de
seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo
regulamento de pesca do estado de S�o Paulo (50 quilos) deve pagar uma multa de R$
4,00 por quilo excedente. Jo�o precisa que voc� fa�a um algoritmo que leia a vari�vel P
(peso de peixes) e verifique se h� excesso. Se houver, gravar na vari�vel E (Excesso) e na
vari�vel M o valor da multa que Jo�o dever� pagar. Caso contr�rio mostrar tais vari�veis
com o conte�do ZERO. */
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


/* 7-Fa�a um algoritmo para ler um n�mero que � um c�digo de usu�rio. Caso este
c�digo seja diferente de um c�digo armazenado internamente no algoritmo (igual a 1234)
deve ser apresentada a mensagem �Usu�rio inv�lido!�. Caso o C�digo seja correto, deve
ser lido outro valor que � a senha. Se esta senha estiver incorreta (a certa � 9999) deve ser
mostrada a mensagem �Acesso negado�. Caso a senha esteja correta, deve ser mostrada a
mensagem �Acesso permitido�.*/

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
