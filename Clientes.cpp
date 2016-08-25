/*Criar uma struct para armazenar os dados de clientes em uma casa noturna
Os dados são nome RG e Telefone
Criar uma varável Global para efetuar o cadastro
Crie um procedimento para preencher os dados do cliente e outro para exibi-los*/

#include<stdio.h>
#include<conio.h>

struct cliente{
	
	char nome[30],RG[10],telefone[9];
	};
	
	cliente c;
	
	void preenche();
	void exibe();
	void preenche(){
	printf("Digite o Nome do Cliente: ");
	fflush(stdin);
	gets(c.nome);
	printf("Digite o RG do Cliente: ");
	//fflush(stdin);
	gets(c.RG);
	//fflush(stdin);
	printf("Digite o Telefone: ");
	gets(c.telefone);
		
	}
	
	void exibe(){
	
	printf("O Cliente cadastrado:\n\nNome: %s \nRG: %s\nTelefone: %s",c.nome,c.RG,c.telefone)	;
	getch();
			
	}
	
	main(){
		
		preenche();
		exibe();
		
		
	}
