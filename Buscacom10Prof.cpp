/* Criar um programa que o usuario digite 10 valores em um vetor
Em seguida solicitar que digite um determinado numero para ser localizado.
Se localizado exibir o indice que se encontra, caso cointrario
exibir uma mensagem que o n é inexistente  */
#include<stdio.h>
#include<conio.h>

main(){
	
	int vetor[10], chave;
	int achado=0;//,indice;
	printf("Digite 10 valores\n");
	for (int i=0;i<10;i++){
	scanf("%d",&vetor[i]);
	}
	
	printf("Digite o numero a ser buscado\n");
	scanf("%d",&chave);
	
	for(int i=0;i<10;i++){
		
		if (vetor[i]==chave){
			printf("\n\n Achado no indice %d",i);
			achado=1;
			//indice=i;
		//break; //se tiver valor repetido retorna o primeiro
		}
	}
	
	if(achado==0){printf("\n\n Nao encontrado");
			
	}
	getch();
	}
