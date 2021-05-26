# ORIENTAÇÕES

O foco central do trabalho é poder compreender as distintas propriedades dos algoritmos de ordenação e dessa forma poder realizar a implementação. O trabalho está dividido em 2 partes.

## Trabalho 2 - Ordenação por Quicksort e Heapsort

Neste quesito do trabalho será desenvolvido um sistema didático que explique ao usuário o funcionamento de cada um destes métodos. Para isso, o próprio sistema deverá criar vetores de números inteiros que serão ordenados. O usuário deve poder selecionar se o vetor deve conter números em ordem crescente, decrescente ou aleatórios, e o tamanho do vetor. 

Para visualizar os resultados, o usuário deverá escolher se deseja ver apenas o resultado final (dados ordenados) ou se deseja executar os algoritmos passo a passo, vendo a explicações para a execução de cada algoritmo. Caso o usuário deseje executar os algoritmos passo a passo ele pode selecionar quais passos deseja visualizar. Para cada um dos métodos os passos relevantes são distintos:

### Quicksort

__a) Seleção de pivô:__ apresenta qual elemento foi selecionado e como.

__b) Troca de elementos:__ apresenta o valor do pivô, o índice e valor dos elementos a serem
trocados.

__c) Divisão do vetor:__ mostra como o vetor está sendo particionado: quais são os índices
e elementos de cada parte.

### Heapsort

__a)__ Os passos para (re)construção do heap, mostrando o elemento em questão, seus
filhos e a troca sendo feita

__b)__ O elemento selecionado a cada passo pelo heapsort

O usuário deve poder informar ao sistema quais destes passos deseja visualizar (pode ser apenas 1, uma combinação deles ou todos). Além disso, o sistema deverá apresentar ao usuário o tempo gasto para a ordenação, e o número de comparações e movimentações feitas entre registros.

## O que deve ser entregue

* Código fonte do programa em C (código muito bem identado e comentado).
* Programa executável compilado.
* Documentação do trabalho. Entre outras coisas, a documentação deve conter:

    __1. Introdução:__ descrição do problema a ser resolvido e visão geral sobre o funcionamento do programa.

    __2. Implementação:__ descrição sobre a implementação do programa. Deve ser detalhada a estrutura de dados utilizada (de preferência com diagramas ilustrativos), o funcionamento das principais funções e procedimentos utilizados, o formato de entrada e saída de dados, bem como decisões tomadas relativas aos casos e detalhes de especificação que porventura estejam omissos no enunciado.

    __3. Conclusão:__ comentários gerais sobre o trabalho e as principais dificuldades encontradas em sua implementação.

    __4. Bibliografia:__ bibliografia utilizada para o desenvolvimento do trabalho,
incluindo sites da Internet se for o caso
