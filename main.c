#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "operations.c"

//TODO: Heapsort Passo a Passo
//TODO: Quicksort Passo a Passo

int main(){
    //Variáveis
    int op, tam = 0; //Opção do menu e tamanho do vetor
    clock_t t; //Variáveis para cálculo do tempo de execução do algoritmo
    double time_required;
    int* vetKey; //Vetor que armazena as opções de visualização do passo a passo
    int* ptrTam = &tam; //Ponteiro que aponta para o tamanho do vetor

    //Criação do vetor
    int* vet = cria_vetor(ptrTam);
    printf("O vetor criado foi:\n");
    imprime_vetor(vet, tam, 0);

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
                imprime_vetor(vet, tam, 0); //Impressão do vetor antes da ordenação
                t = clock(); //Clock Inicial
                quickSort(vet, 0, tam-1); //Chamada da função quickSort
                clean_stdin();
                //getchar();
                t = clock() - t; //Clock final - inicial
                printf("\n\nVetor Ordenado com Quicksort:\n");
                imprime_vetor(vet, tam, 0); //Impressão do vetor depois da ordenação
                time_required = ((double)t)*1000/CLOCKS_PER_SEC; //Tempo em milisegundos   
                printf("\nTempo de execucao: %f ms\n", time_required);
                clean_stdin();
                getchar();
			break;
			
            //Ordenar utilizando Heapsort (fast)
            case 2:
                system("cls");
                printf("||--------------------------------------------------------------|| \n");
                printf("||----------------------- HEAPSORT FAST ------------------------|| \n");
                printf("||--------------------------------------------------------------|| \n\n");
                printf("Vetor Original:\n");
                imprime_vetor(vet, tam, 0); //Impressão do vetor antes da ordenação
                t = clock(); //Clock Inicial
                heapSort(vet, tam); //Chamada da função heapSort
                clean_stdin();
                //getchar();
                t = clock() - t; //Clock final - inicial
                printf("\n\nVetor Ordenado com Heapsort:\n");               
                imprime_vetor(vet, tam, 0); //Impressão do vetor depois da ordenação
                time_required = ((double)t)*1000/CLOCKS_PER_SEC; //Tempo em milisegundos                
                printf("\nTempo de execucao: %f ms\n", time_required);
                clean_stdin();
                getchar();
			break;
            
            //Ordenar utilizando Quicksort (passo a passo)
            case 3:
                //Chama o menu com passos e opções de visualização
                vetKey = menu_quicksort();
                printf("\nflag3\n");
                system("cls");
                printf("||--------------------------------------------------------------|| \n");
                printf("||----------------- QUICKSORT PASSO A PASSO --------------------|| \n");
                printf("||--------------------------------------------------------------|| \n\n");
                printf("Vetor Original:\n");
                //Impressão do vetor antes da ordenação
                imprime_vetor(vet, tam, 0);
                printf("\n\nVetor Ordenado com Quicksort:\n");
                //Chamada da função quickSort_passo
                quickSort_passo(vet, 0, tam-1, vetKey);
                //Impressão do vetor depois da ordenação
                imprime_vetor(vet, tam, 0);
                
                /*
                printf("vetKey[0] = %d\n", vetKey[0]);
                printf("vetKey[1] = %d\n", vetKey[1]);
                printf("vetKey[2] = %d\n", vetKey[2]);
                */
                clean_stdin();
                getchar();
                libera_vetor(vetKey);
			break;
            
            //Ordenar utilizando Heapsort (passo a passo)
			case 4:
                vetKey = menu_heapsort();
                system("cls");
                printf("||--------------------------------------------------------------|| \n");
                printf("||------------------ HEAPSORT PASSO A PASSO --------------------|| \n");
                printf("||--------------------------------------------------------------|| \n\n");
                
                /*
                printf("vetKey[0] = %d\n", vetKey[0]);
                printf("vetKey[1] = %d\n", vetKey[1]);
                */
                clean_stdin();
                getchar();
                libera_vetor(vetKey);
			break;
            
            //Imprime o vetor
            case 5:
                system("cls");
                printf("||--------------------------------------------------------------|| \n");
                printf("||--------------------------- VETOR ----------------------------|| \n");
                printf("||--------------------------------------------------------------|| \n\n");
                imprime_vetor(vet, tam, 0);
			break;
            
            //Cria um novo vetor
            case 6:
                libera_vetor(vet);
                vet = cria_vetor(ptrTam);
                printf("O vetor criado foi:\n");
                imprime_vetor(vet, tam, 0);
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