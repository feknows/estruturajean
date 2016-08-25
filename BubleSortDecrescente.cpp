/*Implementando o Buble Sort com ordenacao decrescente popular um vetor de 200 posicoes
com valores randomicos
exibir o vetor
com menu*/
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define TAM 200

int interno, externo,indice, menor,aux;
int vetor[TAM];

void menu();
void preenche();
void ordena();
void exibe();

void ordena(){
	//int vetor[]={7,5,10,3};
		
	for(externo=0;externo<TAM;externo++){
		
		for(interno=TAM-1;interno>externo;interno--){
			if(vetor[interno-1]<vetor[interno]){
			aux=vetor[interno];
			vetor[interno]=vetor[interno-1];
			vetor[interno-1]=aux;
			}
		}
	}
	printf("Vetor ordenado=")	;
	for(int i=0;i<TAM;i++){
	printf("%d ",vetor[i]);
	}

}

void exibe(){
	printf("Vetor original=");
	for (int i=0;i<TAM;i++){
	printf("%d ",vetor[i]);
	}
	
}


void preenche(){
	srand(time(NULL));
	for (int i=0;i<200;i++){
		vetor[i]=rand()%59+1;		
	}
	printf("Vetor Prrenchido com sucesso!!\n\n");
}


void menu(){
int escolha;
do{
	
	printf("\nEscolha uma opção\n");
	printf("1-Preenche Vetor   2- Exibe Vetor 3-Ordena Vetor    4-Sair\n\n");
	scanf("%d",&escolha);

switch(escolha){
	
	case 1: preenche();break;
	case 2: exibe();break;
	case 3: ordena();break;
	}

}while(escolha!=4);	
	
};



main(){	
	
	menu();
	
	
	
	getch();
}


