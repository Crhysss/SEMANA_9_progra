#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Las variable "y" y x son los que guardan la informacion que ingresa el usuario sobre las dimensiones que quiere
que sea su matriz*/
int main(){
    int i = 0, j = 0, y, x;
    
    printf("Ingrese las dimensiones de la matriz: \n");
    scanf("%d", &y);
    scanf("%d", &x) ;
    /*Esta funcion srand es la encargada de generar los numeros random
    y que se registren o bueno se guerden en la matriz[y][x]*/
    int matriz[y][x];
    srand(time(NULL));
    
    for(i = 0; i < y; i++){
        for(j = 0; j < x; j++){
            //
            matriz[i][j] = rand()%100;
            printf("%d ", matriz[i][j]);
        }
        
        printf("\n");
    }
    printf("\nMatriz transpuesta:\n");
    for (j = 0; j < x; j++) {
        for (i = 0; i < y; i++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
