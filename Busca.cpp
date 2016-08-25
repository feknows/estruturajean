/* Algoritmo sequencial ou linear de Busca  */


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

main(){
	int vetor[6]={2,5,1,6,9,44};
	int chave=9;
	
	for(int i=0;i<6;i++){
		
		if (vetor[i]==chave){
			printf("\n\n Achado no indice %d",i);
	//	break; se tiver valor repetido retorna o primeiro
		}
	}
	getch();
	
}
