#include "mergeSort.hh"

void merge(long *vetor, long start_pos, long end_pos, long mid) {
    // Alocação dinâmica do vetor auxiliar
    long *aux = new long[end_pos - start_pos + 1];

    // Variáveis auxiliares usadas no vetor
    int pos_livre = 0; // Posição livre no vetor auxiliar
    int start_vector_left = start_pos; // Acompanhar vetor do lado esquerdo
    int start_vector_right = mid + 1; // Acompanhar vetor do lado direito

    // Mesclagem
    while (start_vector_left <= mid && start_vector_right <= end_pos) {
        if (vetor[start_vector_left] <= vetor[start_vector_right]) {
            aux[pos_livre] = vetor[start_vector_left];
            start_vector_left++;
        } else {
            aux[pos_livre] = vetor[start_vector_right];
            start_vector_right++;
        }
        pos_livre++;
    }

    // Copiar elementos restantes do lado esquerdo
    while (start_vector_left <= mid) {
        aux[pos_livre] = vetor[start_vector_left];
        pos_livre++;
        start_vector_left++;
    }

    // Copiar elementos restantes do lado direito
    while (start_vector_right <= end_pos) {
        aux[pos_livre] = vetor[start_vector_right];
        pos_livre++;
        start_vector_right++;
    }

    // Copiar de volta do vetor auxiliar para o vetor original
    for (int i = 0; i < pos_livre; i++) {
        vetor[start_pos + i] = aux[i];
    }

    // Liberar a memória do vetor auxiliar
    delete[] aux;
}


void mergeSort(long *vetor, long start_pos, long end_pos){

    long mid;

    //Condicao de parada da recursividade
    if(start_pos < end_pos){
        mid = (end_pos+start_pos)/2; //-> Valor do meio

        //Chamada recursiva para dividir o vetor
        mergeSort(vetor, start_pos, mid); //-> Divisao do trecho da esquerda do vetor
        mergeSort(vetor, mid+1, end_pos); //-> Divisao do trecho a direito do vetor

        merge(vetor, start_pos, end_pos, mid); //-> Mescla de cada valor
    }
}

