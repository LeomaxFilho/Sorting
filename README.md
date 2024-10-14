# Implementação dos Algoritmos de Ordenação: Merge Sort e QuickSort em C++

Este repositório contém implementações dos algoritmos de ordenação **Merge Sort** e **QuickSort** em C++. Ambos são algoritmos eficientes de "divisão e conquista" usados para ordenar vetores. Cada um tem suas características únicas em termos de desempenho e escolha de pivô (no caso do QuickSort).

## Sumário
- [Como Funciona](#como-funciona)
- [Merge Sort](#merge-sort)
- [QuickSort](#quicksort)

## Como Funciona

Tanto o **Merge Sort** quanto o **QuickSort** seguem uma abordagem de divisão e conquista:

1. **Dividir**: Ambos os algoritmos dividem o vetor em partes menores.
   - Merge Sort: Divide o vetor em duas metades.
   - QuickSort: Divide o vetor baseado na posição de um pivô.
2. **Conquistar**: Ordenam as partes menores de forma recursiva.
3. **Combinar**: 
   - Merge Sort: Mescla as metades ordenadas.
   - QuickSort: Rearranja os elementos com base no pivô escolhido.

O **Merge Sort** tem complexidade garantida de O(n log n), enquanto o **QuickSort** tem uma complexidade média de O(n log n), mas pode chegar a O(n²) no pior caso. No entanto, com uma boa escolha de pivô, o QuickSort geralmente é mais rápido em prática.

### Merge Sort

O Merge Sort divide o vetor em dois, ordena cada metade recursivamente e então mescla as duas metades ordenadas em um único vetor. A função principal é `mergeSort`, e a função auxiliar `merge` realiza a mesclagem.

#### Código Principal

```cpp
void merge(long *vetor, long start_pos, long end_pos, long mid);
void mergeSort(long *vetor, long start_pos, long end_pos);
```
#### Como Funciona:

1. **MergeSort**: Recursivamente divide o vetor até que contenha apenas um elemento.
2. **Merge**: Mescla dois subvetores em um vetor ordenado, usando um vetor auxiliar temporário para armazenar os elementos durante a mesclagem.

### QuickSort
O QuickSort escolhe um pivô e rearranja os elementos para que todos os menores que o pivô fiquem à esquerda e os maiores à direita. A função principal é quicksort, enquanto partition define a posição correta do pivô.

#### Função de Escolha de Pivô (Mediana de Três)
O algoritmo inclui uma otimização para a escolha do pivô, usando a técnica da mediana de três: seleciona o pivô como a mediana entre o primeiro, o último e o elemento do meio do vetor.

#### Código Principal

```cpp
long pivot_pick(std::vector<long> &vetor, long left, long right);
long partition(std::vector<long> &vetor, long left, long right);
void quicksort(std::vector<long> &vetor, long left, long right);
```
#### Como Funciona:
1. **Quicksort**: Recursivamente ordena os elementos em relação ao pivô.
2. **Partition**: Reorganiza o vetor em torno do pivô, movendo os elementos menores para a esquerda e os maiores para a direita.
3. **Pivot_pick**: Escolhe o pivô usando a técnica da mediana de três, o que ajuda a evitar o pior caso de desempenho do QuickSort.