#include <stdio.h>
#include <conio.h>

main(){
 int x, cont=1;
do{
		x=5*cont;
	printf ("\n 5*%d=%d",cont,x);
		fflush (stdin); //limpar memoria
		
cont ++;
}while (cont <=10);
				getch();
			}//fim do main
