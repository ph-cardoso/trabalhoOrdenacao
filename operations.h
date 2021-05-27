//Protótipos das funções

//Limpa o buffer do teclado
void clean_stdin();

//Menu principal do programa
void menu();

//Menus com atribuição de flag
int* menu_quicksort();
//void menu_heapsort(int*, int*);

//Reset das vetKey >> Vetor com as flags do que deve ser mostrado no passo a passo
void reset_vetKey(int*);

//Tratamento do Vetor
int* cria_vetor(int*);
void libera_vetor(int*);
void imprime_vetor(int*, int);

//Quicksort
int particiona(int*, int, int);
void quickSort(int*, int, int);

//Heapsort
void criaHeap(int*, int, int);
void heapSort(int*, int);