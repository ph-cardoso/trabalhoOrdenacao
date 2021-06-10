//PROTÓTIPOS DAS FUNÇÕES

//Limpa o buffer do teclado
void clean_stdin();

//Menu principal do programa
void menu();

//Menus que pegam a opção de visualização do usuário do passo a passo
int* menu_quicksort();
int* menu_heapsort();

//Operações com o vetor
int* cria_vetor(int*);
void libera_vetor(int*);
void imprime_vetor(int*, int, int);

//Quicksort Algorithm
int particiona(int*, int, int);
void quickSort(int*, int, int);

//Heapsort Algorithm
void criaHeap(int*, int, int);
void heapSort(int*, int);

//Quicksort passo a passo
int particiona_passo(int*, int, int, int*, int);
void quickSort_passo(int*, int, int, int*, int);

//Heapsort passo a passo
void criaHeap_passo(int*, int, int, int*, int, int*, int*);
void heapSort_passo(int*, int, int*);