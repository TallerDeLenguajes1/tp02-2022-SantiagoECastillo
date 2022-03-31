#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define N 20
int main(){
    double nun;
    srand((int)time(NULL));
    int i;
    int vt[N];
    int *pArreglo;

    pArreglo = vt;
   
    
    for(i = 0; i<N ; i++){
        *pArreglo = 1 + rand() % 100;
        printf("%d ", *pArreglo);
        pArreglo++;
    }
    
    printf("Recorremos el arreglo sin puntero\n");
    printf("\n");
    for(i = 0; i<N ; i++){
        printf("%d ", vt[i]);
    }

    return 0;
}