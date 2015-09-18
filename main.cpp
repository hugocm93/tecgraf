#include <iostream>
#include "matriz.h"

using namespace std;


int main(void){
    int linhas, colunas;
    cout << "Digite o numero de linhas e colunas: " << endl;
    cin >> linhas >> colunas ;
    
    Matriz *m = new Matriz(linhas, colunas);
    
    for(int i=0; i < linhas ; i++){
        for(int j=0; j < colunas ; j++){
            cout << "Digite o elemento da linha " << i+1 <<  " coluna " << j+1 << endl;
            float aux;
            cin >> aux;
            m->setElem(i,j,aux);
        }
    }
    
    cout << "end"<< endl;
    
    float mediaColunasPares=0, mediaLinhasImpares=0;
    
    for(int j=1; j < colunas ; j+=2){
        for(int i=0; i < linhas ; i++){
            mediaColunasPares += m->getElem(i,j);
            
        }
    }
    
    mediaColunasPares /= (colunas/2)*linhas;
    
    cout << "Media Colunas Pares " << mediaColunasPares << endl;
    
    
    
    return 0;
}