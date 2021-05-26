#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "operations.h"
#define MAX_RAND 100 // máximo na criação dos números aleatórios com a função rand()

// limpa o buffer do teclado
void clean_stdin(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void menu(){
	system("cls");
    printf("||--------------------------------------------------------------|| \n");
    printf("||---------------------------- MENU ----------------------------|| \n");
    printf("||--------------------------------------------------------------|| \n\n");
    printf("1 - Ordenar utilizando Quicksort (fast).\n");
	printf("2 - Ordenar utilizando Heapsort (fast).\n");
    printf("3 - Ordenar utilizando Quicksort (passo a passo).\n");
	printf("4 - Ordenar utilizando Heapsort (passo a passo).\n");
    printf("6 - Criar um novo vetor.\n");
    printf("0 - Sair do programa.\n");
	printf("\nOpcao: ");
}

void imprime_vetor(int* vet, int tam){
    int i;
    printf("vet = [");
        for(i=0; i<tam; i++){
            // if e else apenas para não inserir uma vírgula após a impressão do último elemento
            if(i!=(tam-1))
                printf(" %d,", vet[i]);
            else
                printf(" %d", vet[i]);
        }
        printf(" ]");
        clean_stdin();
        getchar();
}

// aloca o vetor em memória
int cria_vetor(int* vet){
    system("cls");
    int tam, i;

    printf("||--------------------------------------------------------------|| \n");
    printf("||--------------------------- VETOR ----------------------------|| \n");
    printf("||--------------------------------------------------------------|| \n\n");
    printf("Digite o tamanho do vetor a ser criado: ");
    scanf("%d", &tam);
    
    // diferenciação da "semente" do rand utilizando a hora do sistema
    srand(time(NULL));
    // alocação do vetor na memória
    vet = (int*)malloc(sizeof(int)*tam);

    // vet != NULL >> Vetor alocado com sucesso
    if(vet!=NULL){
        // inserção de valores aleatórios no vetor
        for(i=0; i<tam; i++){
            vet[i] = rand() % MAX_RAND;
        }
        printf("\n\nVetor criado com sucesso!\n\n");
        printf("O vetor criado foi:\n");
        // impressão do vetor
        imprime_vetor(vet, tam);
        return tam;
    }
    else{
        printf("\n\nErro na criacao do vetor!");
        clean_stdin();
        getchar();
        return 0;
    }
}

// libera o vetor alocado anteriormente
void libera_vetor(int* vet){
    free(vet);
}