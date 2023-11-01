/**
 * @file maxqueue.cpp
 * @brief  Archivo de implementación del TDA MaxQueue
 * @author Iván Rodríguez Chacón
 */
#include "maxqueue.h"

const elemento& MaxQueue::front() const {
    return this->pila.top();
}

void MaxQueue::pop() {
    this->pila.pop();
}

void MaxQueue::push(int val) {
    stack<elemento> aux;

    while(!this->empty()){
        aux.push(this->front());
        this->pop();
    }

    this->pila.emplace(val, val);

    while(!aux.empty()){
        int maximo_actual = this->front().maximo;
        int valor = aux.top().valor;
        int maximo_nuevo = valor < maximo_actual ? maximo_actual : valor;

        this->pila.emplace(valor, maximo_nuevo);
        aux.pop();
    }
}

bool MaxQueue::empty() const {
    return this->pila.empty();
}

std::stack<elemento>::size_type MaxQueue::size() const {
    return this->pila.size();
}

void MaxQueue::swap(MaxQueue &queue) {
    this->pila.swap(queue.pila);
}