/**
 * @file elemento.h
 * @brief Cabecera del struct elemento usado para organizar el valor y el máximo en las pilas y colas
 */

#ifndef P03_PILAS_COLAS_ELEMENTO_H
#define P03_PILAS_COLAS_ELEMENTO_H

#include <iostream>

using namespace std;

struct elemento{
    int valor;
    int maximo;

    /**
     * @brief Constructor de la estructura
     */
     elemento(int valor, int maximo){
         this->valor = valor;
         this->maximo = maximo;
     }
    /**
     * @brief este método pasa a una cadena los dos valores de la estructura.
     * @return La cadena con el valor y el máximo.
     */
    string toString() const;
};


/**
 * @brief Esta función sobrecarga el operador << para aceptar un elemento en cualquier salida de flujo.
 * @param os Representa la salida de los datos.
 * @param elem Referencia constante del elemento a introducir en el flujo.
 * @return Se devuelve @param os para poder concatenar entradas de flujo.
 */
ostream& operator<<(ostream &os, const elemento &elem);

/**
 * @brief Esta función sobrecarga el operador << para aceptar un elemento en cualquier salida de flujo.
 * @param os Representa la salida de los datos.
 * @param elem Referencia del elemento a introducir en el flujo.
 * @return Se devuelve @param os para poder concatenar entradas de flujo.
 */
ostream& operator<<(ostream &os, elemento &elem);
#endif //P03_PILAS_COLAS_ELEMENTO_H