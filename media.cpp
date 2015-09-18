#include <cstdio>
#include <iostream>

#define TAM 10

using namespace std;

int verifica(int a[], int n){
   int media = 0;

   for(int i = 0; i < n ; i++){
        media += a[i];
   }
    media /= n;

   for(int i = 0; i < n ; i++){
        if(a[i] == media){
            return media;
        }
   }

    return -1;

}

int main(void){
    int vet[TAM] = {0};
    
    cout << "Digite os valores:" << endl;

    for(int i = 0; i<TAM; i++){
        cin >> vet[i];
    }

    int aux = verifica(vet, TAM);

    if(aux!=-1){
        cout << aux << endl;

    }
    else{
        cout << "Nao tem nunhum elemento que corresponde a media" << endl;
    }
    return 0;
}
