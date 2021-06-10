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
    printf("1 - Ordenar utilizando Quicksort (direto).\n");
	printf("2 - Ordenar utilizando Heapsort (direto).\n");
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
int particiona_passo(int* V, int inicio, int final, int* vetKey, int tam){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = V[inicio];
    if(vetKey[0]==1){
      printf("\nSELECAO DE PIVO:\n");
      imprime_vetor(V,tam,0);
      printf("\nPivo Selecionado: vet[%d]=%d\n", inicio, V[inicio]);
    }
    while(esq < dir){
        while(esq <= final && V[esq] <= pivo){
            esq++;
        }

        while(dir >= 0 && V[dir] > pivo){
            dir--;
        }

        if(esq < dir){
            if(vetKey[1] == 1){
                printf("\nTROCA DE ELEMENTOS:\n");
                imprime_vetor(V,tam,0);
                printf("\nPivo: %d\n", pivo);
                printf("Valor dos elementos que estao sendo trocados: vet[%i] = %i e vet[%i] = %i\n", esq, V[esq], dir, V[dir]);
            }
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
            if(vetKey[1] == 1){
                imprime_vetor(V,tam,0);
                printf("\n");
            }
        }
    }
    if(vetKey[1] == 1){
        printf("\nTROCA DE ELEMENTOS DEPOIS DA COMPARACAO:\n");
        imprime_vetor(V,tam,0);
        printf("\nPivo: %d\n", pivo);
        printf("vet[%i]=%d recebe vet[%i]=%d\n", inicio, V[inicio], dir, V[dir]);
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    if(vetKey[1] == 1){
        imprime_vetor(V,tam,0);
        printf("\n");
    }
    return dir;
}

void quickSort_passo(int* V, int inicio, int fim, int* vetKey, int tam){
    int pivo;
    if(fim > inicio){
        pivo = particiona_passo(V, inicio, fim, vetKey, tam);
        if(vetKey[0] == 1){
            printf("\nSELECAO DE PIVO:\n", pivo, V[pivo]);
            imprime_vetor(V,tam,0);
            printf("\nPivo selecionado: vet[%i] = %i\n", pivo, V[pivo]);
        }
        if(vetKey[2] == 1){
            printf("\nDIVISAO DO VETOR:\n");
            imprime_vetor(V, tam, 0);
            printf("\n\nParte 1 (Inicio => Pivo-1):\n");
            printf("Elemento Inicial: vet[%i] = %i\n", inicio, V[inicio]);
            if(pivo!=inicio)
                printf("Elemento Final: vet[%i] = %i\n", pivo-1, V[pivo-1]);
            imprime_vetor(V, pivo, inicio);
            printf("\n\nParte 2 (Pivo+1 => Fim):\n");
            if(pivo!=tam-1)
                printf("Elemento Inicial: vet[%i] = %i\n", pivo+1, V[pivo+1]);
            printf("Elemento Final: vet[%i] = %i\n", fim, V[fim]);
            imprime_vetor(V, (tam-pivo), pivo+1);
            printf("\n");
        }
        quickSort_passo(V, inicio, pivo-1, vetKey, tam);
        quickSort_passo(V, pivo+1, fim, vetKey, tam);
    }
}

//Heapsort passo a passo
void criaHeap_passo(int *vet, int i, int f, int* vetKey, int N, int* ptrComp, int* ptrMov){
    int aux = vet[i];
    int j = i * 2 + 1; //Primeiro filho
    
    while (j <= f){ //Filho está dentro do vetor?
        if(vetKey[1]==1){
            printf("\n\nELEMENTO SELECIONADO PELO HEAP:\n");
            imprime_vetor(vet, N, 0);
            printf("\nvet[%d]=%d\n", i, vet[i]);
        }
        if(j < f){ //Pai tem dois filhos?
            if(vet[j] < vet[j + 1]){ //Qual filho é maior?
                j = j + 1; //'j' passa a ser o maior filho
            }
            (*ptrComp)++; //Comparacao do If
        }
        (*ptrComp)++; //Comparacao do If
        if(aux < vet[j]){ //Filho maior que o Pai?
            if(vetKey[0]==1){
                printf("\nRECONSTRUCAO DO HEAP:\n");
                imprime_vetor(vet, N, 0);
                printf("\n\nElemento Pai: vet[%d]=%d\n", i, vet[i]);
                printf("Elemento Filho que vai ser trocado: vet[%d]=%d\n\n", j, vet[j]);
            }
            vet[i] = vet[j]; //Pai passa a ser o filho
            i = j; //Índice do pai recebe índice do filho
            j = 2 * i + 1; //Filho do Filho => Repete o ciclo
            if(vetKey[0]==1){
                imprime_vetor(vet, N, 0);
            }
            (*ptrMov)++;
        }else{
            j = f + 1; //Caso o pai seja maior j termina
        }
        (*ptrComp)++; //Comparacao do If
        (*ptrComp)++; //Comparacao do While
    }
    (*ptrComp)++; //Comparacao do While de saída
    vet[i] = aux; //O último vetor substituído recebe o aux que guardava o Pai inicial
    (*ptrMov)++;
}

void heapSort_passo(int *vet, int N, int* vetKey){
    int i, aux, mov = 0, comp = 0, *ptrComp, *ptrMov;
    ptrComp = &comp;
    ptrMov = &mov;
    //Criação do Heap a partir dos dados
    for(i=(N - 1)/2; i >= 0; i--){
        criaHeap_passo(vet, i, N-1, vetKey, N, ptrComp, ptrMov);
        (*ptrComp)++; //Comparacao do for
    }
    (*ptrComp)++; //Comparacao do for de saída

    for (i = N-1; i >= 1; i--){
        //Colocar o maior elemento da Heap na sua respectiva posição no vetor
        //Maior elemento => Topo da Árvore
        if(vetKey[0]==1){
            printf("\n\nPOSICIONAMENTO MAIOR ELEMENTO:\n");
            imprime_vetor(vet, N, 0);
            printf("\n\nElemento: vet[%d]=%d\n", 0, vet[0]);
            printf("Elemento Troca: vet[%d]=%d\n\n", i, vet[i]);
        }
        aux = vet[0];
        vet [0] = vet [i];
        vet [i] = aux;
        (*ptrMov)++;
        if(vetKey[0]==1){
                imprime_vetor(vet, N, 0);
            }
        
        //Reconstrução do heap
        criaHeap_passo(vet, 0, i - 1, vetKey, N, ptrComp, ptrMov);
        (*ptrComp)++; //Comparacao do for
    }
    (*ptrComp)++; //Comparacao do for de saída

    printf("\n\nQuantidade de comparacoes: %d\n", *ptrComp);
    printf("Quantidade de movimentos: %d\n", *ptrMov);
}