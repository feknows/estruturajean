/*Criar um vetor de reais com 8 posicoes. Solicitar que o usuario
preencha os valores e por fim exibir a média dos valores.*/
#include<stdio.h>
#include<conio.h>

main(){
	
	
	float vetor[8],soma=0,media;	

	printf("Digite os indices de um vetor de 8 posicoes\n");
	for (int i=0;i<=7;i++){
		printf("n%d  ",i+1);
		scanf("%f",&vetor[i]);
			
	}
		for (int i=0;i<=7;i++){
	soma+=vetor[i];
			
	}
	media=soma/8;

	printf("\nmedia final= %.2f",media);
	getch();

}

