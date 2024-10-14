#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <ctime>
#include <unistd.h>
#include <cstdlib>

void merge(long *vetor, long start_pos, long end_pos, long mid);

void mergeSort(long *vetor, long start_pos, long end_pos);