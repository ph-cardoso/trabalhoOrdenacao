#include <stdio.h>
#include <stdlib.h>
#include "operations.c"


int main(){
    // variáveis
    int* vet = NULL;
    int tam, op;
	
    //Primeira execução: >> Cria um vetor inicial >> Mostra o menu pela primeira vez >> Entra no LOOP
    tam = cria_vetor(vet);

    menu(); //Mostra o menu
	scanf("%i", &op); //Pega a opção do usuário
	do{
		switch(op)
		{
			case 1:

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
            menu(); //Mostra o menu
            scanf("%i",&op); //Pega a opção do usuário
		}
	}while(op != 0);

    return 0;
}