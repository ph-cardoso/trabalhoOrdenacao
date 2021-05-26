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
			// ordenar utilizando Quicksort (fast)
            case 1:
                system("cls");
                printf("||--------------------------------------------------------------|| \n");
                printf("||---------------------- QUICKSORT FAST ------------------------|| \n");
                printf("||--------------------------------------------------------------|| \n\n");
                printf("Vetor Original:\n");
                // impressão do vetor antes da ordenação
                imprime_vetor(vet, tam);
                printf("\n\nVetor Ordenado com Quicksort:\n");
                // chamada da função quickSort
                quickSort(vet, 0, tam-1);
                // impressão do vetor depois da ordenação
                imprime_vetor(vet, tam);
			break;
			// ordenar utilizando Heapsort (fast)
            case 2:
                system("cls");
                printf("||--------------------------------------------------------------|| \n");
                printf("||----------------------- HEAPSORT FAST ------------------------|| \n");
                printf("||--------------------------------------------------------------|| \n\n");
                printf("Vetor Original:\n");
                // impressão do vetor antes da ordenação
                imprime_vetor(vet, tam);
                printf("\n\nVetor Ordenado com Heapsort:\n");
                // chamada da função heapSort
                heapSort(vet, tam);
                // impressão do vetor depois da ordenação
                imprime_vetor(vet, tam);
			break;
            // ordenar utilizando Quicksort (passo a passo)
            case 3:

			break;
            // ordenar utilizando Heapsort (passo a passo)
			case 4:
            
			break;
            // imprime o vetor
            case 5:
                system("cls");
                printf("||--------------------------------------------------------------|| \n");
                printf("||--------------------------- VETOR ----------------------------|| \n");
                printf("||--------------------------------------------------------------|| \n\n");
                imprime_vetor(vet, tam);
			break;
            // cria um novo vetor
            case 6:
                libera_vetor(vet);
                vet = cria_vetor(ptrTam);
                printf("O vetor criado foi:\n");
                imprime_vetor(vet, tam);
			break;
            // sair do programa
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