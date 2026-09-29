#ifndef QUIZ_3_MERGESORT_H
#define QUIZ_3_MERGESORT_H


#include <vector>

// Declaración de las funciones del Merge Sort y utilidades
void merge(std::vector<int>& arr, int left, int mid, int right);
void mergeSort(std::vector<int>& arr, int left, int right);
void printVector(const std::vector<int>& arr);

#endif
