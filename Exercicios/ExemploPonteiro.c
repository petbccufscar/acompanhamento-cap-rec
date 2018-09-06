#include<stdio.h>
void troca1 (int x, int y){
    int aux = x;
    x = y;
    y = aux;
}
void troca2(int* x, int* y){
    int aux = x;
    x = y;
    y = aux;
}

void troca3 (int* x, int* y){
    int aux = *x;
    *x = *y;
    *y = aux;
}
int main(){
    int x = 5, y = 6;

    troca1(x,y); 
    printf("x:%d, y:%d\n", x, y);

    troca2(&x, &y);
    printf("x:%d, y:%d\n", x, y);

    troca3(&x, &y);
    printf("x:%d, y:%d\n", x, y);

    return 0;
}

