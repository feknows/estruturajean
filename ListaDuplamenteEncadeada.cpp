/*MOdelo de nó  |valor|prox| */

/*Inserir no na cabeca 1) Criar um no 2) Apontar pra cabeca
3) Passar a cabeca pra primeira posica*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>//para conversar com owindows durante aloca~ção de memória

struct no {
	int valor;//conteudo ou valor na lista dinamica
	no *prox;//ponteiro do tipo nó
};

no *cabeca;//ponteiro do primeiro elemento da lista do tipo da struct criada "nó

void criarListaVazia();
void inserirInicio();
void ListaVazia();
void exibeLista();
void exibeTamanho();
void dadosPrimeiro();
void exibeultimo();
void inserenofinal();
void buscarChave();

void exibeultimo(){
	//exibir os dados do primeiro!! o valor contido no cabeca
	no*ultimo;
	ultimo=cabeca;
	
	printf("O Ultimo elemento vale %d ",ultimo->valor);
	system("pause");
		
	
}



void criarListaVazia(){
	cabeca=NULL;//lista está criada mas está vazia por enquanto cuidado se a lista ja existir esse comando apaga a lista!!!!
	printf("\nLista Vazia criada com sucesso ");
	system("pause");
}

void inserirInicio(){
    
    int vl;
    no *novo;
    printf("\nDigite um valor:");
    scanf("%d",&vl);
    novo=(no*)malloc(sizeof(no));//alocação dinamica conversando com o window
   	//novo=malloc(sizeof(no));//alocação dinamica conversando com o window
    novo->valor=vl;//atribui valor digitado ao nó
    novo->prox=cabeca;//o campo chamado prox do novo vai ser a cabeca recebe NULL
    cabeca=novo;//cabeca recebe endereco de memoria do novo 
    printf("\n\nNo inserido com sucesso ");
    system("pause");
    }
    
    void ListaVazia(){
    	//logica: se o ponteiro cabeca apontar para Null, a lista estará vazia
    no *inspec;//criado um no auxiliar chamado inspec
    inspec=cabeca;//este no recebe o valor de cabeca(endereco de memoria do primeiro)
    if (inspec==NULL){printf("\nLista está vazia!!");
    system("pause");
	}else{printf("A lista NAO e vazia\n");
	exibeLista();
	system("pause");
	}
	
	}
void exibeLista(){   
    no *aux;
    aux=cabeca;
    printf("\nConteudo da Lista\n\n");
    while(aux!=NULL){
        printf(" %d ",aux->valor);
    aux=aux->prox;    
    
        }
        system("pause");
    }



	void exibeTamanho(){
	no *aux;
	int tam=0;
    aux=cabeca;
    //printf("\nConteudo da Lista\n\n");
    
    if(aux==NULL){printf("Lista Vazia ");
	}else{

    
    
    while(aux!=NULL){
        //printf(" %d ",aux->valor);
    aux=aux->prox;
	tam++;    
    	}
        }
        printf("Tamanho da lista vale %d ",tam);
        system("pause");
	}

void dadosPrimeiro(){
	no *pri;
	pri=cabeca;
     while(pri->prox!=NULL){
  	pri=pri->prox;
 
 	}
       printf("Primeiro da lista vale %d ",pri->valor);
        system("pause");
	}
	
	
	
void inserenofinal(){
	 	
	int vf;
    no *novo;
    printf("\nDigite um valor:");
    scanf("%d",&vf);
    novo=(no*)malloc(sizeof(no));//alocação dinamica conversando com o window
   	//novo=malloc(sizeof(no));//alocação dinamica conversando com o window
     novo->valor=vf;//atribui valor digitado ao nó
     novo->prox=NULL;//o campo chamado prox do novo vai ser a cabeca recebe NULL
    if(cabeca==NULL){cabeca=novo;}//cabeca recebe endereco de memoria do novo 
    printf("\n\nNo inserido com sucesso ");
    system("pause");

	 }

void buscarChave(int chave){
	no *busca=cabeca;
	int flag = 0, cont =0;
	if(cabeca != NULL){
		cont++;
		if(busca->info==chave){
			flag=1;
			printf("\nValor encontrado: %d na posicao %d", busca->info, cont);
			break;
		}
		busca = busca->prox;
	}
	if(flag==0){
		printf("\nValor nao localizado na lista");
	}
}else{
	printf(""A lista Esta vazia");
}
getch();
}

main(){
	
	int op;
	
	do{
	system("cls");
	//system("dir");	
	printf("0-Sair");
	printf("\n1-criar lista vazia ");
	printf("\n2-Inserir no incio da lista ");
	printf("\n3-Exibir Lista");
	printf("\n4-Exibir se a Lista esta vazia");
	printf("\n5-Exibir dados do primeiro");
	printf("\n6-Exibir tamanho");
	printf("\n7-Exibir Ultimo");
	printf("\n8-Insere no Final");
	printf("\n9-buscar Chave\n");
		
	scanf("%d",&op);
	switch(op){
		case 1: criarListaVazia();break;
		case 2: inserirInicio();break;
		case 3: exibeLista();break;
		case 4: ListaVazia();break;
		case 5: dadosPrimeiro();break;
		case 6: exibeTamanho();break;
		case 7: exibeultimo();break;
		case 8: inserenofinal();break;
		case 9: buscarChave();break;
		
	}
	
	}while(op!=0);
	
	getch();
}





