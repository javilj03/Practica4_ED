/**
 * @file maxstack.cpp
 * @brief  Archivo de implementación del TDA MaxStack
 * @author Javier Lama Jiménez
 */
#include "maxstack.h"

const elemento& MaxStack::top() {
   return this->queue.front();
}

void MaxStack::pop() {
   this->queue.pop();
}

void MaxStack::push(int val){

   elemento aux(val,val);

   int size = this->queue.size();

   if(this->top().maximo <= val ){
      aux.maximo = val;
      queue.emplace(aux);
   }else{
      aux.maximo = this->top().maximo;
      queue.emplace(aux);
   }

   for(int i = 0; i < size; i++){
      queue.emplace(this->top());
      this->pop();
   }

}
bool MaxStack::empty() const{
   return this->queue.empty();
}
std::queue<elemento>::size_type MaxStack::size() {
   return this->queue.size();
}
