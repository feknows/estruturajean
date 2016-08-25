/*Crie um vetor de 7 posições inteiro, preencher e exibir de trás para frente e que sejam 
divisíveos por 3*/
#include<stdio.h>
#include<conio.h>

main(){
	
	int vetor[7];
	
	
	printf("Preencha um vetor de 7 posicoes:\n");
	for (int i=0;i<=6;i++){
		printf("n %d: ",i+1);
		scanf("%d",&vetor[i]);
		}
	printf("______________________\n\n");
	printf("Os numeros divisiveis por 3 de tras para frente:\n");
	for (int i=6;i>=0;i--){
		if (vetor[i]%3==0){
			printf("n %d \n",vetor[i]);}


	
		
	
	}
	
getch();	
	
	
}
