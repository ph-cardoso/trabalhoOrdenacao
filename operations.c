#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "operations.h"
#define MAX_RAND 100 // valor máximo da criação dos números aleatórios com a função rand()

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
	printf("5 - Imprimir vetor.\n");
    printf("6 - Criar um novo vetor.\n");
    printf("0 - Sair do programa.\n");
	printf("\nOpcao: ");
}

// aloca o vetor em memória
int* cria_vetor(int* tam){
    system("cls");
    int i;

    printf("||--------------------------------------------------------------|| \n");
    printf("||------------------------ CRIAR VETOR -------------------------|| \n");
    printf("||--------------------------------------------------------------|| \n\n");
    printf("Digite o tamanho do vetor a ser criado: ");
    scanf("%d", tam);

    // diferenciação da "semente" do rand utilizando a hora do sistema
    srand(time(NULL));

    // alocação do vetor na memória
    int* vet = (int*) calloc((*tam), sizeof(int));

    // vet != NULL >> Vetor alocado com sucesso
    if(vet!=NULL){
        // inserção de valores aleatórios no vetor
        for(i=0; i<(*tam); i++){
            vet[i] = rand() % MAX_RAND;
        }
        printf("\n\nVetor criado com sucesso!\n\n");
        return vet;
    }
    else{
        printf("\n\nErro na criacao do vetor!");
        clean_stdin();
        getchar();
        return NULL;
    }
}

// libera o vetor alocado anteriormente
void libera_vetor(int* vet){
    free(vet);
}

// imprime o vetor
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

// Quicksort >> particiona
int particiona(int *V, int inicio, int final ){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = V[inicio];
    while(esq < dir){
        while(esq <= final && V[esq] <= pivo)
            esq++;

        while(dir >= 0 && V[dir] > pivo)
            dir--;

        if(esq < dir){
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    //printf("---------------\n");
    return dir;
}

// Quicksort
void quickSort(int *V, int inicio, int fim) {
    int pivo;
    if(fim > inicio){
        pivo = particiona(V, inicio, fim);
        quickSort(V, inicio, pivo-1);
        quickSort(V, pivo+1, fim);
    }
}

// Heapsort >> cria Heap
void criaHeap(int *vet, int i, int f){
    int aux = vet[i];
    int j = i * 2 + 1;
    while (j <= f){
        if(j < f){
            if(vet[j] < vet[j + 1]){
                j = j + 1;
            }
        }
        if(aux < vet[j]){
            vet[i] = vet[j];
            i = j;
            j = 2 * i + 1;
        }else{
            j = f + 1;
        }
    }
    vet[i] = aux;
}

// Heapsort >> ordena
void heapSort(int *vet, int N){
    int i, aux;
    for(i=(N - 1)/2; i >= 0; i--){
        criaHeap(vet, i, N-1);
    }
    for (i = N-1; i >= 1; i--){
        aux = vet[0];
        vet [0] = vet [i];
        vet [i] = aux;
        criaHeap(vet, 0, i - 1);
    }
}