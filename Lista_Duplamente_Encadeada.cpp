#include<stdio.h>
#include<conio.h>
#include<windows.h>

struct no{

int conteudo;

no*proximo;

no*anterior;

};

no*cabeca;

void criarListaVazia();
void inserirInicio();
void inserenofinal();
void dadosPrimeiro();
void exibeTamanho();
void exibeultimo();
void exibeLista();


void criarListaVazia(){
	cabeca=NULL;//lista está criada mas está vazia por enquanto cuidado se a lista ja existir esse comando apaga a lista!!!!
	printf("\nLista Vazia criada com sucesso ");
	system("pause");
}

void inserirInicio(){

int valor;
no*novo;
printf("\nDigite: ");
scanf("%d",&valor);

novo=(no*)malloc(sizeof(no));
//no*novo= new no();//outra maneira de alocar espaço na memoria!!
novo->conteudo=valor;
novo->anterior=NULL;
if(cabeca==NULL){
novo->proximo=NULL;
}else{
	novo->proximo=cabeca;
	cabeca->anterior=novo;
}
cabeca=novo;
printf("elemento inserido com sucesso no inicio");
system("pause");
}



void inserenofinal(){
	int valor;
printf("\nDigite: ");
scanf("%d",&valor);
no*novo= new no();//outra maneira de alocar espaço na memoria!!

novo->conteudo=valor;
novo->proximo=NULL;

if(cabeca==NULL){
novo->proximo=NULL;
}else{
	novo->anterior=cabeca;
	cabeca->proximo=novo;
}
//cabeca=novo;
printf("elemento inserido com sucesso no final");
system("pause");
}
void dadosPrimeiro(){
}
void exibeTamanho(){
}
void exibeultimo(){
}
void exibeLista(){

    no *aux;
    aux=cabeca;
    printf("\nConteudo da Lista\n\n");
    while(aux!=NULL){
        printf(" %d ",aux->conteudo);
    aux=aux->proximo;    
    
        }
        system("pause");
    
	

}

main(){


int op;
	
	do{
	system("cls");
	//system("dir");	
	printf("0-Sair");
	printf("\n1-criar lista vazia ");
	printf("\n2-Inserir no incio da lista ");
	printf("\n3-Insere no Final");
	printf("\n4-Exibir dados do primeiro");
	printf("\n5-Exibir tamanho");
	printf("\n6-Exibir Ultimo");
	printf("\n7-Exibir Lista\n");
	
	scanf("%d",&op);
	switch(op){
		case 0: return(0);break;
		case 1: criarListaVazia();break;
		case 2: inserirInicio();break;
		case 3: inserenofinal();break;
		case 4: dadosPrimeiro();break;
		case 5: exibeTamanho();break;
		case 6: exibeultimo();break;
		case 7: exibeLista();break;
		
	}
	
	}while(op!=0);


getch();


}

