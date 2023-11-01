/**
 * @file elemento.cpp
 * @brief Este fichero tiene la implementacion de los métodos del struct elemento.
 */
#include "elemento.h"

string elemento::toString() const {
    return "[ valor: " + to_string(this->valor) + " , maximo: " + to_string(this->maximo) + " ]\n";
}

ostream& operator<<(std::ostream &os, const elemento &elem) {
    os << elem.toString();

    return os;
}

ostream& operator<<(std::ostream &os, elemento &elem) {
    os << elem.toString();

    return os;
}