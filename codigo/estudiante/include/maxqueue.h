/**
 * @file maxqueue.h
 * @brief  Archivo de especificación del TDA MaxQueue
 * @author Iván Rodríguez Chacón
 */
#include <stack>
#include "elemento.h"

class MaxQueue{
private:
    std::stack<elemento> pila;
public:
    /**
     * @brief Este método devuelve la referencia al primer elemento de la cola.
     * @return referencia constante al elemento en la primera posición.
     */
    const elemento& front() const;

    /**
     * @brief Este método borra el primer elemento de la cola.
     */
    void pop();

    /**
     * @brief Este método inserta un nuevo valor en la última posición.
     * @param val Valor a insertar.
     */
    void push(int val);

    /**
     * @brief Método que verifica si la cola está vacía.
     * @return true si está vacía false en caso contrario.
     */
    bool empty() const;

    /**
     * @brief Este método nos indica el tamaño de la cola.
     * @return El tamaño de la cola, respetando los tipos de variables de la stl.
     */
    std::stack<elemento>::size_type size() const;

    /**
     * @brief Este método intercambia dos MaxQueue
     * @param queue Con esta cola hace el intercambio la cola que llama al método
     */
    void swap(MaxQueue& queue);
};