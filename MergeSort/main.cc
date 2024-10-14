#include "mergeSort.hh"

int main(int argc, char *argv[])
{
    std::ifstream read;
    read.open(argv[1]);
    std::cout << "Excutando a instancia: " << argv[1] << std::endl;
    
    if(!read.is_open()){
        std::cout << "Error ao abrir o arquivo\n";
        exit(EXIT_FAILURE);
    }

    clock_t tempo;
    long *vetor;
    long tamanho;
    long k=0;
    read >> tamanho;
    vetor = new long[tamanho];

    while(!read.eof()){
        read >> vetor[k];
        k++;
    }
 
    std::cout << "Vetor desordenado: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl << std::endl;

    tempo = clock();
    mergeSort(vetor, 0, tamanho - 1);
    tempo = clock() - tempo; 

    std::cout << "Vetor ordenado: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " ";
    }

    std::cout << "\nTempo da Operacao: " << ((float)tempo)/CLOCKS_PER_SEC << " milissegundos (ms)\n";
    
    read.close();

    delete[] vetor;

    return 0;
}