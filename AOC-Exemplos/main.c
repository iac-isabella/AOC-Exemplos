#include <stdio.h>
#include <stdlib.h>

int main(){

	int acumulador, contador, i, valor, vetor[3];

	/* Exemplo 1: estrutura de decisao */
	printf("Exemplo 1:\n");
	valor = 1;
	if(valor==1){
		printf("true\n");
	}
	else{
		printf("false\n");
	}
	/* Fim do exemplo 1 */


	/* Exemplo 2: loop com while */
	printf("\nExemplo 2:\n");
	acumulador = 0;
	while(acumulador < 10){
		acumulador+=2;
	}
	printf("acumulador = %d\n", acumulador);
	/* Fim do exemplo 2 */


	/* Exemplo 3: loop com for */
	printf("\nExemplo 3:\n");
	for(contador = 1; contador <= 5; contador++){
		printf("%d\n", contador);
	}
	/* Fim do exemplo 3 */


	/* Exemplo 4: manipulando um vetor */
	printf("\nExemplo 4:\n");
	for(i = 0; i < 3; i++){
		vetor[i] = i;
		printf("vetor[%d] = %d\n", i, vetor[i]);
	}
	/* Fim do exemplo 4 */


	system("pause");
	return 0;

}