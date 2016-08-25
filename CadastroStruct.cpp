

#include<stdio.h>
#include<conio.h>

struct cadastro {
	
	char nome[30];
	int idade;
	
};



main(){
	
	cadastro c,d;
	
	printf("Digite o Nome: \n");
	fflush(stdin);
	gets(c.nome);
	printf("Digite a idade: ");
	scanf("%d",&c.idade);
	printf("\n\n %s - %d\n",c.nome,c.idade);
	
	
	printf("Digite o Nome: \n");
	fflush(stdin);
	gets(d.nome);
	printf("Digite a idade: ");
	scanf("%d",&d.idade);
	printf("\n\n %s - %d",d.nome,d.idade);
	getch();
	
	
	
}
