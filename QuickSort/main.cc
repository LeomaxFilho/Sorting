#include "quickSort.hh"

int main(int argc, char *argv[])
{
    clock_t tempo;

    std::ifstream read;
    read.open(argv[1]);
    
    std::vector<long> vetor;

    std::cout << "Excutando a instancia: " << argv[1] << std::endl;
    
    if(!read.is_open()){
        std::cout << "Error ao abrir o arquivo\n";
        exit(EXIT_FAILURE);
    }

    long aux;
    read >> aux;

    while(!read.eof()){
        read >> aux;
        vetor.push_back(aux);
    }
    
    
    std::cout << "Vetor desordenado: ";
    for (int i = 0; i < vetor.size(); i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    tempo = clock();
    quicksort(vetor, 0, vetor.size() - 1);
    tempo = clock() - tempo;

    std::cout << "Vetor ordenado: ";
    for (int i = 0; i < vetor.size(); i++) {
        std::cout << vetor[i] << " ";
    }

    std::cout << "\nTempo da Operacao: " << ((float)tempo)/CLOCKS_PER_SEC << " milissegundos (ms)\n";

    read.close();
    return 0;
}