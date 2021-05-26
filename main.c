#include <stdio.h>
#include <stdlib.h>
#include "operations.c"


int main(){
    // variáveis
    int** ptrVet = NULL;
    int tam, op;
	
    // primeira execução: >> Cria um vetor inicial >> Mostra o menu pela primeira vez >> Entra no LOOP
    tam = cria_vetor(ptrVet);

    menu(); //mostra o menu
	scanf("%i", &op); //pega a opção do usuário
	do{
		switch(op)
		{
			case 1:
                imprime_vetor(*ptrVet, tam);
			break;
			case 2:

			break;
            case 3:

			break;
			case 4:
            
			break;
            case 5:

			break;
			case 0:
            
			break;		
			default:
                puts("Opcao Invalida.\n");
                clean_stdin();
                getchar();
		}
		if(op != 0){
            menu(); //mostra o menu
            scanf("%i",&op); // pega a opção do usuário
		}
	}while(op != 0);

    libera_vetor(ptrVet);
    return 0;
}