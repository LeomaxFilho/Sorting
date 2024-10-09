#include <vector>
#include <iostream>
#include <algorithm>


/**
* * Uma boa maneira de escolher um pivot e escolher dentre tres numeros aleatorios do vetor
* * Dentre esses tres numeros escolher a mediana desses tres numeros e dessa forma mitigar
* * A chance de escolher um pivot pessimo
*/

long pivot_pick(std::vector<long> &vetor, long left, long right) // mediana de tres // "&" para a passagem por referencia
{
    long mid = (left + right) / 2; // posicao do meio do vetor

    long _left = vetor[left];
    long _mid = vetor[mid];
    long _right = vetor[right];

    if ((_mid < _right && _mid > _left) || (_mid > _right && _mid < _left))
    {
        return mid;

    }else if ((_left < _mid && _left > _right) || (_left > _mid && _left < _right))
    {
        return left;

    } else
    {
        return right;

    }
    
    return right;

}

long partition(std::vector<long> &vetor, long left, long right) // "&" para a passagem por referencia
{
    long idx_pivot =  pivot_pick(vetor, left, right); // escolher o pivot

    // Coloca o pivot no ponto mais a esquerda do vetor
    long tmp = vetor[idx_pivot];
    vetor[idx_pivot] = vetor[right];
    vetor[right] = tmp;
    
    long pivot = vetor[right];
    // left e o ponto que se encontra o pivot
    long i = left - 1; // ponteiro que aponta para o "meio" do vetor

    for (long j = left; j < right; j++)
    {
        if (vetor[j] <= pivot)
        {
            i++;
            int temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
        }
        
    }

    tmp = vetor[right];
    vetor[right] = vetor[i + 1];
    vetor[i + 1] = tmp;

    return i + 1;
}

void quicksort(std::vector<long> &vetor, long left, long right) // "&" para a passagem por referencia
{
    if (left < right)
    {
        int idx_pivot = partition(vetor, left, right);

        quicksort(vetor, left, idx_pivot - 1);
        quicksort(vetor, idx_pivot + 1, right);
    }
    
}

int main()
{
    std::vector<long> vetor = {10, 7, 8, 9, 1, 5};
    
    std::cout << "Vetor desordenado: ";
    for (int i = 0; i < vetor.size(); i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    quicksort(vetor, 0, vetor.size() - 1);

    std::cout << "Vetor ordenado: ";
    for (int i = 0; i < vetor.size(); i++) {
        std::cout << vetor[i] << " ";
    }

    return 0;
}