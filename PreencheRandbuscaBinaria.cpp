/*1-Preencher um vetor com 200 posicoes com valore randomicos
2-exibir o conteudo
3-efetuar uma busca binaria
4-efetuar busca sequencial*/
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

#define TAM 2000

int vetor[TAM];
int interno, externo,indice,aux,chave;
int achado=0;
int valorMeio;
void prenche();
void menu();
void exibe();
void ordena();
void buscaBinaria();
void buscaSequencial();

void preenche(){
	srand(time(NULL));
	for (int i=0;i<2000;i++){
		vetor[i]=rand()%100;		
	}
	printf("Vetor Prrenchido com sucesso!!\n\n");
}

void menu(){
int escolha;
do{
	
	printf("\nEscolha uma opção\n");
	printf("1-Preenche Vetor   2- Exibe Vetor 3-Ordena Vetor   4-BUscaBinaria     5-BuscaSequencial   6-Sair\n\n");
	scanf("%d",&escolha);

switch(escolha){
	
	case 1: preenche();break;
	case 2: exibe();break;
	case 3: ordena();break;
	case 4: buscaBinaria();break;
	case 5: buscaSequencial();break;
	}

}while(escolha!=5);	
	
};

void exibe(){
	printf("Vetor original nao ordenado = ");
	for (int i=0;i<TAM;i++){
	printf("%d ",vetor[i]);
	}
	
}


void ordena(){
	//int vetor[]={7,5,10,3};
		
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
	printf("%d ",vetor[i]);
	}

}


void buscaBinaria(){
	
	printf("Digite o numero a ser buscado: ");
	scanf("%d",&chave);
	
	
	int esq=0;
	int dir = TAM-1;
	
	
	while (esq<=dir){
		valorMeio=(esq+dir)/2;
		if(vetor[valorMeio]<chave){
			esq=valorMeio +1;
		}else if (vetor[valorMeio]>chave){
			dir=valorMeio-1;
			}else{
			printf("indice: %d",valorMeio);
			achado=1;
			break;
		}
	}
	if(achado==0){
		
		printf("\nNao encontrado o valor");
	}

}

void buscaSequencial(){
	
	printf("Digite o numero a ser buscado: ");
	scanf("%d",&chave);
	
	
	for(int i=0;i<TAM;i++){
		
	if(vetor[i]==chave){
		achado=1;
		printf("Encontrado valor na posicao %d ",i);
		break;
		
	}
			
	}
	
	
	if(achado==0){
		
		printf("\nNao encontrado o valor");
	}
	
	
}




main(){
	
	menu();
	
	getch();
}
