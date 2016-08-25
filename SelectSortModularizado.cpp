/*Implementand o select sort- Principio 2 laços For externo e interno para percorrer o vetor
com variaveis menor, para armazenar o menor, indice para armazenar a posicao do vetor
 e auxiliar para possibilitar as trocas*/
#include<stdio.h>
#include<conio.h>
#define TAM 3

void preenche();
void ordena();
void exibe();
int vetor[TAM];
int interno, externo, menor, indice, aux;

void preenche(){
	
for(int i=0;i<TAM;i++){ //preenche vetor
	printf("\nDigite o indice %d=",i);
	scanf("%d",&vetor[i]);
	}
};
void ordena(){


	printf("\n\n");
for (externo=0;externo<TAM-1;externo++){
	menor=vetor[externo];
	indice=externo;
	for(interno=externo+1;interno<TAM;interno++){
		if(vetor[interno]<menor){
		menor=vetor[interno];
		indice=interno;	
		}
	}
	aux=vetor[externo];
	vetor[externo]=menor;
	vetor[indice]=aux;
}
	printf("\n\n\nVetor ordenado   ")	;
	for(int i=0;i<TAM;i++){
		printf("%d",vetor[i]);
	}

	
};
void exibe(){
	printf("\n\n\nVetor nao ordenado   ")	;
for(int i=0;i<TAM;i++){//exibe o vetor
	printf("%d",vetor[i]);
	}
};


main(){
preenche();

exibe();

ordena();
	
	
	getch();
}
