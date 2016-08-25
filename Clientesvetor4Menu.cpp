/*Criar uma struct para armazenar os dados de clientes em uma casa noturna
Os dados são nome RG e Telefone
Criar uma varável Global para efetuar o cadastro
Crie um procedimento para preencher os dados do cliente e outro para exibi-los*/
#include<stdio.h>
#include<conio.h>
struct cliente{
	
	char nome[30],RG[10],telefone[9];
	};
	
	cliente c[4];//Declaração Global
	
	void preenche();
	void exibe();
	void menu();
	void menu(){
	int escolha;
	do{		
		printf("Escolha uma opção\n");
		printf("1-Preencher      2-Exibir      3-Sair\n");
		scanf("%d",&escolha);
		switch(escolha){
		case 1: preenche();break;
		case 2: exibe();break;
		
		}
		}while(escolha!=3);
	}

	
	void preenche(){
		for (int i=0;i<4;i++){
	printf("Digite o Nome do Cliente: ");
	fflush(stdin);
	gets(c[i].nome);
	printf("Digite o RG do Cliente: ");
	//fflush(stdin);
	gets(c[i].RG);
	//fflush(stdin);
	printf("Digite o Telefone: ");
	gets(c[i].telefone);
	}
	}
	void exibe(){
	for (int i=0;i<4;i++){
	printf("O %d Cliente cadastrado:\n\nNome:%s \nRG: %s\nTelefone: %s\n\n",i+1,c[i].nome,c[i].RG,c[i].telefone);
	}
	getch();
	}
	
	main(){	
	menu();	
	//getch();
		//preenche();
		//exibe();
	}
