/*Implementando o Buble Sort*/

#include<stdio.h>
#include<conio.h>
#define TAM 4

main(){
	
	int interno, externo,indice, menor,aux;
	int vetor[]={7,10,5,2};
	printf("Vetor original=");
	for (int i=0;i<TAM;i++){
	printf("%d ",vetor[i]);
	}
	printf("\n\n");
	
	for(externo=0;externo<TAM;externo++){
		
		for(interno=TAM-1;interno>externo;interno--){
			if(vetor[interno-1]>vetor[interno]){
			aux=vetor[interno];
			vetor[interno]=vetor[interno-1];
			vetor[interno-1]=aux;
			}
		}
	}
		printf("Vetor ordenado=")	;
	for(int i=0;i<TAM;i++){

	printf("%d",vetor[i]);
	
	}
	
	getch();
}
