/* Criar um programa que o usuario digite 10 valores em um vetor
Em seguida solicitar que digite um determinado numero para ser localizado.
Se localizado exibir o indice que se encontra, caso cointrario
exibir uma mensagem que o n é inexistente  */
#include<stdio.h>
#include<conio.h>
	int vetor[10], chave;
	int achado=0;
	
	void preencher();
	void localizar(int chave);

void preencher(){
	printf("Digite 10 valores\n");
	for (int i=0;i<10;i++){
	scanf("%d",&vetor[i]);
	}
	
}


void localizar(int chave){
		for(int i=0;i<10;i++){
		
		if (vetor[i]==chave){
			printf("\n\n Achado no indice %d",i);
			achado=1;
		}
	}
	
	if(achado==0){printf("\n\n Nao encontrado");
	}
	
	
}


main(){
	
	int ch;
	printf("Digite o numero a ser buscado\n");
	scanf("%d",&ch);
	preencher();
	localizar(ch);
	
	

	

	

	getch();
	}
