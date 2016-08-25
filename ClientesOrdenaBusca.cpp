/*
Criar uma Struct Cliente com nome e RG. Cadastrar 5 Clientes em
um vetor ordenar e buscar por RG
*/



#include<stdio.h>
#include<conio.h>
#include<string.h>

int externo, interno, aux,chave,achado=0,valorMeio;
//int vetor[5];


struct cliente{
	
	char nome[50];
	int rg;
	
};


cliente c[5];

void cadastra();

void cadastra(){
	printf("Preencha o nome e RG do Cliente: \n");
	for (int i=0;i<5;i++){
		printf("Cliente %d nome: ",i+1);
		//scanf("%s",&c[i].nome);
		fflush(stdin);
		gets(c[i].nome);
	
		//printf("\n");
		printf("Cliente %d RG: ",i+1);
		scanf("%d",&c[i].rg);
	
		
	}

}
void exibe();
void exibe(){
	for (int i=0;i<5;i++){
		printf("Cliente %d nome: %s",i+1,c[i].nome);
		printf("///RG %d:%d \n",i+1,c[i].rg);
	}

}

void ordena();

void ordena(){
	char n[30];
for(externo=0;externo<5;externo++){
		
		for(interno=4;interno>externo;interno--){
			if(c[interno-1].rg>c[interno].rg){
			aux=c[interno].rg;
			strcpy(n,c[interno].nome);
			
			c[interno].rg=c[interno-1].rg;
			strcpy(c[interno].nome,c[interno-1].nome);
			
			c[interno-1].rg=aux;
			strcpy(c[interno-1].nome,n);
			
			
			
			}
		}
	}
	printf("Clientes ordenados por RG=\n")	;
	for(int i=0;i<5;i++){
	printf("%s ",c[i].nome);
	printf("%d \n",c[i].rg);
	}
}


void busca();
void busca(){
	
	
}

void buscaBinaria();
void buscaBinaria(){
	
	printf("Digite o numero a ser buscado: ");
	scanf("%d",&chave);
	
	
	int esq=0;
	int dir = 5-1;
	
	
	while (esq<=dir){
		valorMeio=(esq+dir)/2;
		if(c[valorMeio].rg<chave){
			esq=valorMeio +1;
		}else if (c[valorMeio].rg>chave){
			dir=valorMeio-1;
			}else{
			//printf("posicao: %d",valorMeio);
			printf("   nome: %s",c[valorMeio].nome);
			achado=1;
			break;
		}
	}
	if(achado==0){
		
		printf("\nNao encontrado o valor");
	}

}

void buscaSequencial();
void buscaSequencial(){
}

void menu(){
int escolha;
do{
	
	printf("\nEscolha uma opção\n");
	printf("1-Cadastra   2- Exibe Clientes 3-Ordena por RG   4-BUscaBinaria  5-BuscaSequencial   6-Sair\n\n");
	scanf("%d",&escolha);

switch(escolha){
	
	case 1: cadastra();break;
	case 2: exibe();break;
	case 3: ordena();break;
	case 4: buscaBinaria();break;
	case 5: buscaSequencial();break;
	}

}while(escolha!=5);	
	
};

main(){
	
	menu();
	//cadastra();
	//exibe();
	
	
	getch();
}





