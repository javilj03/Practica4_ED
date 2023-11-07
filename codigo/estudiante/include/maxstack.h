/**
 * @file maxstack.h
 * @brief  Archivo de especificación del TDA MaxStack
 * @author Javier Lama Jiménez
 */

#include <queue>
#include "elemento.h"

class MaxStack{
private:
   std::queue<elemento> queue;

public:
    /**
     * @brief Este metodo devuelve el elemento en lo alto de la pila.
     * @return Referencia constante al elemento de lo alto de la pila
     */
    const elemento& top();

    /**
     * @brief Método que elimina el elemento de lo alto de la pila.
     */
     void pop();

     /**
      * @brief Método para añadir un elemento a la pila
      * @elem val Elemento a añadir.
      */
      void push(int val);

      /**
      * @brief Método que verifica si la cola está vacía.
      * @return true si está vacía false en caso contrario.
      */
      bool empty() const;

      /**
      * @brief Este método nos indica el tamaño de la pila.
      * @return El tamaño de la pila, respetando los tipos de variables de la stl.
      */
      std::queue<elemento>::size_type size() ;

};