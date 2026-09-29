#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <chrono>
#include <random>
#include <algorithm> // Para std::sort o asegurar orden en busqueda binaria
#include "MergeSort.h"
#include "BinarySearch.h"

// Función para generar un arreglo con números aleatorios
std::vector<int> generarArregloAleatorio(int n) {
    std::vector<int> arr(n);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(1, 10000000);

    for (int i = 0; i < n; i++) {
        arr[i] = distrib(gen);
    }
    return arr;
}

int main() {
    std::vector<int> tamanios = {1000, 5000, 10000, 50000, 100000, 500000, 1000000};

    std::cout << "N\t\tMerge Sort (us)\t\tBusqueda Binaria (10k ops) (us)\n";
    std::cout << "--------------------------------------------------------\n";

    for (int n : tamanios) {

        // ==========================================
        // 1. ARREGLO Y BENCHMARK PARA MERGE SORT
        // ==========================================
        // Creamos un arreglo aleatorio exclusivo para Merge Sort
        std::vector<int> arrMerge = generarArregloAleatorio(n);

        auto inicioMerge = std::chrono::high_resolution_clock::now();
        mergeSort(arrMerge, 0, n - 1);
        auto finMerge = std::chrono::high_resolution_clock::now();

        long long tiempoMerge = std::chrono::duration_cast<std::chrono::microseconds>(finMerge - inicioMerge).count();


        // ==========================================
        // 2. ARREGLO Y BENCHMARK PARA BÚSQUEDA BINARIA
        // ==========================================
        // La búsqueda binaria requiere orden. Generamos un arreglo y lo ordenamos primero.
        std::vector<int> arrBusqueda = generarArregloAleatorio(n);
        std::sort(arrBusqueda.begin(), arrBusqueda.end()); // Lo dejamos ordenado

        // Como una sola búsqueda binaria toma nanosegundos, medimos un lote de 10,000 búsquedas
        int numBusquedas = 10000;
        auto inicioBusqueda = std::chrono::high_resolution_clock::now();

        for (int b = 0; b < numBusquedas; b++) {
            int valorBuscado = arrBusqueda[b % n]; // Buscamos elementos válidos dentro del arreglo
            busquedaBinaria(arrBusqueda, valorBuscado);
        }

        auto finBusqueda = std::chrono::high_resolution_clock::now();
        long long tiempoBusqueda = std::chrono::duration_cast<std::chrono::microseconds>(finBusqueda - inicioBusqueda).count();


        // Imprimir resultados de la fila actual
        std::cout << n << "\t\t" << tiempoMerge << "\t\t\t" << tiempoBusqueda << "\n";
    }

    return 0;
}