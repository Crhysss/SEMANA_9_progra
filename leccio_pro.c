#include <stdio.h>

int main(){
    int i=0, j=0,y,x;
    int matriz[i][j];
    //"y" y x son las variable que guardan las dimensiones ingresadas por el usuario//
    printf("Ingrese las dimensiones de la matriz\n");
    scanf("%d", &y);
    scanf("%d", &x);
    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            printf("%d ", matriz[y][x]);
        }
        printf("\n");
    }
    return 0;
}