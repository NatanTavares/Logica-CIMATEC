#include <stdio.h>
main(){
	int area;
	float media, nota1, nota2;
	printf("Digite seu curso\n");
	printf("1 - Sistema de Informacao\n");
	printf("2 - Administracao\n");
	printf("3 - Fisioterapia\n");
	printf("4 - Direito\n");
	scanf("%d",&area);
	printf("=======================\n");
	printf("Digite a primeira nota\n");
	scanf("%f",&nota1);
	printf("Digite a segunda nota\n");
	scanf("%f",&nota2);
	media = ((nota1 + nota2)/2);
	switch(area){
		case 1: // SI 7
			printf("Sua media em Sistema de informacao foi %.2f \n", media);
			if(media >= 7){
				printf("Aprovado");
			} else {
				printf("Reprovado");
			}
			break;
		case 2: // Adm 5
			printf("Sua media em Administracao foi %.2f \n", media);
			if(media >= 5){
				printf("Aprovado");
			} else {
				printf("Reprovado");
			}
			break;
		case 3: // Fisio 8
			printf("Sua media em Fisioterapia foi %.2f \n", media);
			if(media >= 8){
				printf("Aprovado");
			} else {
				printf("Reprovado");
			}
			break;
		case 4: // Direito 9
			printf("Sua media em Direito foi %.2f \n", media);
			if(media >= 9){
				printf("Aprovado");
			} else {
				printf("Reprovado");
			}
			break;
		default:
			printf("Curso indesponivel");
	}
}
