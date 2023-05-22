#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i = 0, j = 0, y, x;
    
    printf("Ingrese las dimensiones de la matriz: \n");
    scanf("%d", &y);
    scanf("%d", &x) ;
    
    int matriz[y][x];
    srand(time(NULL));
    
    for(i = 0; i < y; i++){
        for(j = 0; j < x; j++){
            matriz[i][j] = rand()%100;
            printf("%d ", matriz[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}
