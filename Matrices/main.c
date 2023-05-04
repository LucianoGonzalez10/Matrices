#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const colm = 4;
void cargarMatriz(int matriz[4][colm]);
void mostrarMatriz(int matriz[4][colm]);
int sumarMatriz(int matriz[4][colm]);
float promediarMatriz(int matriz[4][colm], int suma);

int main()
{
    int matriz[4][colm];
    cargarMatrizRandoms(matriz);
    mostrarMatriz(matriz);

    int suma = sumarMatriz(matriz);
    printf("\nEl resultado de la suma es: %i", suma);

    float promedio = promediarMatriz(matriz, suma);
    printf("\nEl promedio de la matriz es: %.1f", promedio);
    return 0;
}

void cargarMatriz(int matriz[4][colm]){
int i, j;
for(i = 0; i<4;i++){
    for(j = 0; j<colm; j++){
        printf("Que dato desea apilar en la posicion Fila %i, Columna %i ? \n", i+1, j+1);
        scanf("%i", &matriz[i][j]);
    }
}
}

void mostrarMatriz(int matriz[4][colm]){

int i, j;
for(i = 0; i<4;i++){
        printf("\n");
    for(j = 0; j<colm; j++){
        printf("| %i |", matriz[i][j]);
    }
}
}

void cargarMatrizRandoms(int matriz[4][colm]){
int i, j, valorRandom;
for(i = 0; i<4;i++){
    for(j = 0; j<colm; j++){
        valorRandom = rand()%10;
        matriz[i][j] = valorRandom;
    }
}
}

int sumarMatriz(int matriz[4][colm]){
int i, j, dato, suma = 0;
for(i = 0; i<4;i++){
    for(j = 0; j<colm; j++){
        dato = matriz[i][j];
        suma = suma + dato;
    }
}
return suma;
}

float promediarMatriz(int matriz[4][colm], int suma){
float promedio = suma/(colm*4);
return promedio;
}
