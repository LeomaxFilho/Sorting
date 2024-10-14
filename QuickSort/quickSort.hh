#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <ctime>

/**
* * Uma boa maneira de escolher um pivot e escolher dentre tres numeros aleatorios do vetor
* * Dentre esses tres numeros escolher a mediana desses tres numeros e dessa forma mitigar
* * A chance de escolher um pivot pessimo
*/

long pivot_pick(std::vector<long> &vetor, long left, long right);

long partition(std::vector<long> &vetor, long left, long right);

void quicksort(std::vector<long> &vetor, long left, long right);