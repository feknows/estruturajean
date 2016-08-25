/*Declarar um vetor tipo cadastro com 5 posições*/
#include<stdio.h>
#include<conio.h>

struct cadastro {
	char nome[30];
	int idade;
	
};

main(){
	
	cadastro c[5];//declaração do vetor tipo cadastro
	
	for (int i=0;i<5;i++){
		
	printf("Digite o Nome: \n");
	fflush(stdin);
	gets(c[i].nome);
	printf("Digite a idade: ");
	scanf("%d",&c[i].idade);
	
	}
		
	for (int i=0;i<5;i++){
		
	printf("\n\n %s - %d\n",c[i].nome,c[i].idade);
	
	}

	getch();
}
