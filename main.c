#include <stdio.h>
#include <stdlib.h>
#include "operations.c"

//TODO: Heapsort Passo a Passo
//TODO: Quicksort Passo a Passo

int main(){
    //Variáveis
    int op, tam = 0;
    printf("\nflag1\n");
    int* vetKey;
    //Ponteiro que aponta para o tamanho do vetor
    int* ptrTam = &tam;

    //Criação do vetor
    int* vet = cria_vetor(ptrTam);
    printf("O vetor criado foi:\n");
    imprime_vetor(vet, tam);
    printf("\nflag4\n");
    //Primeira execução: >> Cria um vetor inicial >> Mostra o menu pela primeira vez >> Entra no LOOP
    menu(); //Mostra o menu
	scanf("%i", &op); //Pega a opção do usuário
	do{
		switch(op)
		{
			//Ordenar utilizando Quicksort (fast)
            case 1:
                system("cls");
                printf("||--------------------------------------------------------------|| \n");
                printf("||---------------------- QUICKSORT FAST ------------------------|| \n");
                printf("||--------------------------------------------------------------|| \n\n");
                printf("Vetor Original:\n");
                //Impressão do vetor antes da ordenação
                imprime_vetor(vet, tam);
                printf("\n\nVetor Ordenado com Quicksort:\n");
                //Chamada da função quickSort
                quickSort(vet, 0, tam-1);
                //Impressão do vetor depois da ordenação
                imprime_vetor(vet, tam);
			break;
			
            //Ordenar utilizando Heapsort (fast)
            case 2:
                system("cls");
                printf("||--------------------------------------------------------------|| \n");
                printf("||----------------------- HEAPSORT FAST ------------------------|| \n");
                printf("||--------------------------------------------------------------|| \n\n");
                printf("Vetor Original:\n");
                //Impressão do vetor antes da ordenação
                imprime_vetor(vet, tam);
                printf("\n\nVetor Ordenado com Heapsort:\n");
                //Chamada da função heapSort
                heapSort(vet, tam);
                //Impressão do vetor depois da ordenação
                imprime_vetor(vet, tam);
			break;
            
            //Ordenar utilizando Quicksort (passo a passo)
            case 3:
                //Chama o menu com passos e opções de visualização
                reset_vetKey(vetKey);
                vetKey = menu_quicksort();
                system("cls");
                printf("||--------------------------------------------------------------|| \n");
                printf("||----------------- QUICKSORT PASSO A PASSO --------------------|| \n");
                printf("||--------------------------------------------------------------|| \n\n");
                printf("vetKey[0] = %d\n", vetKey[0]);
                printf("vetKey[1] = %d\n", vetKey[1]);
                printf("vetKey[2] = %d\n", vetKey[2]);
                clean_stdin();
                getchar();
			break;
            
            //Ordenar utilizando Heapsort (passo a passo)
			case 4:
                system("cls");
                printf("||--------------------------------------------------------------|| \n");
                printf("||------------------ HEAPSORT PASSO A PASSO --------------------|| \n");
                printf("||--------------------------------------------------------------|| \n\n");
			break;
            
            //Imprime o vetor
            case 5:
                system("cls");
                printf("||--------------------------------------------------------------|| \n");
                printf("||--------------------------- VETOR ----------------------------|| \n");
                printf("||--------------------------------------------------------------|| \n\n");
                imprime_vetor(vet, tam);
			break;
            
            //Cria um novo vetor
            case 6:
                libera_vetor(vet);
                vet = cria_vetor(ptrTam);
                printf("O vetor criado foi:\n");
                imprime_vetor(vet, tam);
			break;
            
            //Sair do programa
			case 0:
			break;		
			//Tratamento de opção inválida
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

    libera_vetor(vet);
    return 0;
}