#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "operations.h"
#define MAX_RAND 100 //Valor máximo da criação dos números aleatórios com a função rand()

//Limpa o buffer do teclado
void clean_stdin(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//Menu principal do programa
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

//Menu do Quicksort passo a passo
int* menu_quicksort(){
	int op, error_flag = 1, error_flag2 = 1;
    //Char de comparação
    char c;
    //Vetor chave
    int* vet = (int*) calloc(3, sizeof(int));

    while(error_flag){
        system("cls");
        printf("||--------------------------------------------------------------|| \n");
        printf("||----------------------- MENU QUICKSORT -----------------------|| \n");
        printf("||--------------------------------------------------------------|| \n\n");
        printf("PASSOS RELEVANTES:\n");
        printf("A) Selecao de pivo: apresenta qual elemento foi selecionado e como.\n");
        printf("B) Troca de elementos: apresenta o valor do pivo, o indice e valor dos elementos a serem trocados.\n");
        printf("C) Divisao do vetor: mostra como o vetor esta sendo particionado: quais são os indices e elementos de cada parte.\n");
        printf("\n\nOPCOES:\n");
        printf("1. Visualizar apenas 1 passo.\n");
        printf("2. Visualizar 2 passos.\n");
        printf("3. Visualizar todos os passos.\n");
        printf("\nOpcao: ");
        scanf("%i", &op);
        switch(op){
            case 1:
                while(error_flag2){
                    printf("Digite a letra do passo que deseja visualizar: \n");
                    clean_stdin();
                    scanf("%c", &c);
                    //Transforma o caracterte digitado em maiúscula
                    c = toupper(c);
                    switch(c){
                        case 'A':
                            error_flag2 = 0;
                            vet[0] = 1;
                        break;
                        case 'B':
                            error_flag2 = 0;
                            vet[1] = 1;
                        break;
                        case 'C':
                            error_flag2 = 0;
                            vet[2] = 1;
                        break;
                        default:
                            error_flag2 = 1;
                            puts("Opcao Invalida.\n");
                            clean_stdin();
                            getchar();
                    }
                }
                error_flag = 0;
            break;
            case 2:
                while(error_flag2){
                    printf("Digite a letra do primeiro passo que deseja visualizar: \n");
                    clean_stdin();
                    scanf("%c", &c);
                    //Transforma o caracterte digitado em maiúscula
                    c = toupper(c);
                    switch(c){
                        case 'A':
                            error_flag2 = 0;
                            vet[0] = 1;
                        break;
                        case 'B':
                            error_flag2 = 0;
                            vet[1] = 1;
                        break;
                        case 'C':
                            error_flag2 = 0;
                            vet[2] = 1;
                        break;
                        default:
                            error_flag2 = 1;
                            puts("Opcao Invalida.\n");
                            clean_stdin();
                            getchar();
                    }
                }
                error_flag2 = 1;
                while(error_flag2){
                    printf("Digite a letra do segundo passo que deseja visualizar: \n");
                    clean_stdin();
                    scanf("%c", &c);
                    //Transforma o caracterte digitado em maiúscula
                    c = toupper(c);
                    switch(c){
                        case 'A':
                            error_flag2 = 0;
                            vet[0] = 1;
                        break;
                        case 'B':
                            error_flag2 = 0;
                            vet[1] = 1;
                        break;
                        case 'C':
                            error_flag2 = 0;
                            vet[2] = 1;
                        break;
                        default:
                            error_flag2 = 1;
                            puts("Opcao Invalida.\n");
                            clean_stdin();
                            getchar();
                    }
                }
                error_flag = 0;
            break;
            case 3:
                vet[0] = 1;
                vet[1] = 1;
                vet[2] = 1;
                error_flag = 0;
            break;
            default:
                error_flag = 1;
                puts("Opcao Invalida.\n");
                clean_stdin();
                getchar();
        }
    }
    return vet;
}

//Menu do Heapsort passo a passo
int* menu_heapsort(){
    int op, error_flag = 1, error_flag2 = 1;
    //Char de comparação
    char c;
    //Vetor chave
    int* vet = (int*) calloc(2, sizeof(int));

    while(error_flag){
        system("cls");
        printf("||--------------------------------------------------------------|| \n");
        printf("||----------------------- MENU HEAPSORT ------------------------|| \n");
        printf("||--------------------------------------------------------------|| \n\n");
        printf("PASSOS RELEVANTES:\n");
        printf("A) Os passos para (re)construcao do heap, mostrando o elemento em questao, seus filhos e a troca sendo feita.\n");
        printf("B) O elemento selecionado a cada passo pelo heapsort.\n");
        printf("\n\nOPCOES:\n");
        printf("1. Visualizar apenas 1 passo.\n");
        printf("2. Visualizar todos os passos.\n");
        printf("\nOpcao: ");
        scanf("%i", &op);
        switch(op){
            case 1:
                while(error_flag2){
                    printf("Digite a letra do passo que deseja visualizar: \n");
                    clean_stdin();
                    scanf("%c", &c);
                    //Transforma o caracterte digitado em maiúscula
                    c = toupper(c);
                    switch(c){
                        case 'A':
                            error_flag2 = 0;
                            vet[0] = 1;
                        break;
                        case 'B':
                            error_flag2 = 0;
                            vet[1] = 1;
                        break;
                        default:
                            error_flag2 = 1;
                            puts("Opcao Invalida.\n");
                            clean_stdin();
                            getchar();
                    }
                }
                error_flag = 0;
            break;
            case 2:
                vet[0] = 1;
                vet[1] = 1;
                error_flag = 0;
            break;
            default:
                error_flag = 1;
                puts("Opcao Invalida.\n");
                clean_stdin();
                getchar();
        }
    }
    return vet;
}

//Aloca o vetor em memória
int* cria_vetor(int* tam){
    system("cls");
    int i;

    printf("||--------------------------------------------------------------|| \n");
    printf("||------------------------ CRIAR VETOR -------------------------|| \n");
    printf("||--------------------------------------------------------------|| \n\n");
    printf("Digite o tamanho do vetor a ser criado: ");
    scanf("%d", tam);

    //Diferenciação da "semente" do rand utilizando a hora do sistema
    srand(time(NULL));

    //Alocação do vetor na memória
    int* vet = (int*) calloc((*tam), sizeof(int));

    //vet != NULL >> Vetor alocado com sucesso
    if(vet!=NULL){
        //Inserção de valores aleatórios no vetor
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

//Libera o vetor alocado anteriormente
void libera_vetor(int* vet){
    free(vet);
}

//Imprime o vetor
void imprime_vetor(int* vet, int tam, int inicio){
    int i;
    printf("vet = [");
        for(i=inicio; i<tam; i++){
            //If e else apenas para não inserir uma vírgula após a impressão do último elemento
            if(i!=(tam-1))
                printf(" %d,", vet[i]);
            else
                printf(" %d", vet[i]);
        }
        printf(" ]");
        clean_stdin();
        getchar();
}

//Quicksort >> particiona
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
    return dir;
}

//Quicksort
void quickSort(int *V, int inicio, int fim) {
    int pivo;
    if(fim > inicio){
        pivo = particiona(V, inicio, fim);
        quickSort(V, inicio, pivo-1);
        quickSort(V, pivo+1, fim);
    }
}

//Heapsort >> cria Heap
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

//Heapsort >> ordena
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

//Quicksort passo a passo
int particiona_passo(int* V, int inicio, int final, int* vetKey){
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
            if(vetKey[1] == 1){
                printf("\nTROCA DE ELEMENTOS:\n");
                printf("\nValor do Pivo: %i\n", pivo);
                printf("Indice dos elementos a serem trocados: %i e %i\n", esq, dir);
                printf("Valor dos elementos que estao sendo trocados: vet[%i] = %i e vet[%i] = %i\n", esq, V[esq], dir, V[dir]);
            }
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    return dir;
}

void quickSort_passo(int* V, int inicio, int fim, int* vetKey){
    int pivo;
    if(fim > inicio){
        pivo = particiona_passo(V, inicio, fim, vetKey);
        if(vetKey[0] == 1){
            printf("\nSELECAO DE PIVO:\n", pivo, V[pivo]);
            printf("\nPivo selecionado: vet[%i] = %i\n", pivo, V[pivo]);
        }
        if(vetKey[2] == 1){
            printf("\nDIVISAO DO VETOR:\n");
            printf("Vetor:\n");
            imprime_vetor(V, (fim-inicio+1), 0);
            printf("Parte 1 (Inicio => Pivo-1):\n");
            printf("Elemento Inicial: vet[%i] = %i\n", inicio, V[inicio]);
            printf("Elemento Final: vet[%i] = %i\n", pivo-1, V[pivo-1]);
            printf("Vetor:\n");
            imprime_vetor(V, (pivo-inicio), inicio);
            printf("\nParte 2 (Pivo+1 => Fim):\n");
            printf("Elemento Inicial: vet[%i] = %i\n", pivo+1, V[pivo+1]);
            printf("Elemento Final: vet[%i] = %i\n", fim, V[fim]);
            printf("Vetor:\n");
            imprime_vetor(V, (fim-pivo+1), pivo+1);
        }
        quickSort_passo(V, inicio, pivo-1, vetKey);
        quickSort_passo(V, pivo+1, fim, vetKey);
    }
}