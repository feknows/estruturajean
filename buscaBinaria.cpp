#include<stdio.h>
#include<conio.h>

#define TAM 5

int vet []={1,4,6,77,100};

void buscaBinaria(int chave){//  valor tem que estar ordenado
	
	int esq=0;
	int dir = TAM-1;
	int valorMeio; // valor meio = chave de busca
	
	while (esq<=dir){
		valorMeio=(esq+dir)/2;
		if(vet[valorMeio]<chave){
			esq=valorMeio +1;
		}else if (vet[valorMeio]>chave){
			
			dir=valorMeio-1;
			
		}else{
			printf("indice: %d",valorMeio);
			break;
		}
		
		
	}
	
	
	
	
}


main(){
	
	int ch;
	printf("Digite a chave a ser buscada");
	scanf("%d",&ch);
	
	
	buscaBinaria(ch);
	
	
	
	
	
	
	
	
	
	getch();
}
