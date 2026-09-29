//
// Created by dani on 9/29/2026.
//

#include "BinarySearch.h"

int busquedaBinaria(const std::vector<int>& arreglo, int valorBuscado) {
    int izquierda = 0;
    int derecha = static_cast<int>(arreglo.size()) - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (arreglo[medio] == valorBuscado) {
            return medio; // ¡Encontrado! Devuelve el índice
        }
        if (arreglo[medio] < valorBuscado) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }

    return -1; // No se encontró el elemento
}