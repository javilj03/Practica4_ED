#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include "maxstack.h"


using namespace std;

int main(int argc, char *argv[]){
    if(argc < 1) {
        cerr << "Introduzca al menos un argumento." << endl;
        return 1;
    }
     // Run the current exercise
    MaxStack stack;

     for(int i = 1; i < argc; i++){
         if (argv[i][0] == '.'){
             cout << stack.top() << endl;
             stack.pop();
         } else {
             stack.push(atoi(argv[i]));
         }
     }
     return 0;

}
