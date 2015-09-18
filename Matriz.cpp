#include "Matriz.h"
#include <iostream>

using namespace std;

Matriz::Matriz(int nL, int nC){
    nLinhas = nL;
    nColunas = nC;
    matriz = new float[nLinhas*nColunas];
}
Matriz::~Matriz(){
    delete [] matriz;
}

float Matriz::getElem(int l, int c){
    return matriz[nColunas*(l-1) + c];
}

void Matriz::setElem(int l, int c, float elem){
    //cout << nColunas*l + c << endl;
    matriz[nColunas*l + c] = elem;
}


