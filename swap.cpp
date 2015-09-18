#include <cstdio>

void swap(int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}

int main(void){
    int a,b;
    printf("Digite os dois valores:\n");
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a , b);
    swap(a,b);
    printf("Trocando -> a = %d, b = %d\n", a , b);

    return 0;
}
