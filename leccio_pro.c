#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Las bibliotecas stdlib.h y time.h permiten que las funciones srand y rand cumplan su funcion*/
/*Las variable "y" y x son los que guardan la informacion que ingresa el usuario sobre las dimensiones que quiere
que sea su matriz*/
int main(){
    int i = 0, j = 0, y, x;
    
    printf("Ingrese las dimensiones de la matriz (en este orden:filas; columnas): \n");
    scanf("%d", &y);
    scanf("%d", &x) ;
    /*Esta funcion srand es la encargada de generar o bueno indicar que se van a generar numeros random 
    y que se registren o bueno se guerden en la matriz[y][x]*/
    int matriz[y][x];
    srand(time(NULL));
    printf("Matriz original\n");
    for(i = 0; i < y; i++){
        for(j = 0; j < x; j++){
            /*esta parte se encarga de que establecer el rango de los numeros random
            el rango es hasta 100*/
            matriz[i][j] = rand() % 101;
            printf("%d ", matriz[i][j]);
        }
        
        printf("\n");
    }
    /* esta parte es donde se se imprime ese matriz pero transpuesta
    es decir, las filas se vuelven columnas
    por eso se invirtieron las variables que guardaban las filas y columnas */
    printf("\nMatriz transpuesta:\n");
    for (j = 0; j < x; j++) {
        for (i = 0; i < y; i++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
