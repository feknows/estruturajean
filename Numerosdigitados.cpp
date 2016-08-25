/*Escreva um algoritmo que que receba n numeros digitados pelo usuario
até que seja digitado zero, onde o programa devera exibir a soma*/
#include<stdio.h>
#include<conio.h>

main(){
	
	
	float soma=0,n;	
	//scanf("%f",&soma);
	while(n!=0){
		scanf("%f",&n);
		soma=soma+n;
		
	}
	
	printf("resultado final=%.2f",soma);
	getch();

}

