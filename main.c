#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "memorama.h"

int main()
{

    Tablero t = newTablero();
    Cartas k = newCartas();
    gameMode(t);
    getSize(t);

    char ** matriz = fillMatrix(t->filas,t->columnas);
    char ** newMatrix = hiddenMatrix(t->filas,t->columnas);
    printMatrix(t->filas,t->columnas, newMatrix);
    printf("\n\n");
    play(t, t->filas, t->columnas, matriz, newMatrix,k);
    printMatrix(t->filas,t->columnas, matriz);
    return 0;
}


