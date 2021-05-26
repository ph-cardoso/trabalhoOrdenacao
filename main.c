#include <stdio.h>
#include <stdlib.h>
#include "operations.c"


int main(){
    // variáveis
    int op, tam = 0;
    int* ptrTam = &tam;
    
    int* vet = cria_vetor(ptrTam);
    printf("O vetor criado foi:\n");
    imprime_vetor(vet, tam);
	
    /*
    printf("\ntam = %d\n", tam);
    printf("\n*ptrTam = %d\n", *ptrTam);
    printf("\n*ptrvet0 = %d\n", vet[0]);
    printf("\n*ptrvet1 = %d\n", vet[1]);
    printf("\n*ptrvet2 = %d\n", vet[2]);
    printf("\n*ptrvet3 = %d\n", vet[3]);
    printf("\n*ptrvet4 = %d\n", vet[4]);
    */
    // primeira execução: >> Cria um vetor inicial >> Mostra o menu pela primeira vez >> Entra no LOOP

    menu(); //mostra o menu
	scanf("%i", &op); //pega a opção do usuário
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
                system("cls");
                printf("||--------------------------------------------------------------|| \n");
                printf("||--------------------------- VETOR ----------------------------|| \n");
                printf("||--------------------------------------------------------------|| \n\n");
                imprime_vetor(vet, tam);
			break;
            case 6:
                libera_vetor(vet);
                vet = cria_vetor(ptrTam);
                printf("O vetor criado foi:\n");
                imprime_vetor(vet, tam);
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

    libera_vetor(vet);
    return 0;
}