#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i=0, j=0,y,x;
    int matriz[i][j];
    srand(time(NULL));
    //"y" y x son las variable que guardan las dimensiones ingresadas por el usuario//
    printf("Ingrese las dimensiones de la matriz\n");
    scanf("%d", &y);
    scanf("%d", &x);
    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            matriz[i][j]=rand() % 0+100;
            printf("%d ", matriz[y][x]);
        }
        printf("\n");
    }
    return 0;
}