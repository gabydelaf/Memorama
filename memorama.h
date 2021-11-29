//
// Created by gabyd on 28/11/2021.
//

#ifndef PROYECTO_MEMORAMA_MEMORAMA_H
#define PROYECTO_MEMORAMA_MEMORAMA_H
struct tablero
{
    int filas;
    int columnas;
    int jugadores;
    int pares;
};

struct cartas
{
    int cord1f, cord2f;
    int cord1c, cord2c;
};
typedef struct tablero * Tablero;
typedef struct cartas * Cartas;
Tablero  newTablero();
Cartas  newCartas();
void getSize(struct tablero *t);
char** fillMatrix(int f, int c);
void printMatrix(int f, int c, char  ** matriz);
char ** hiddenMatrix(int f, int c);
void play(struct tablero * t, int f, int c, char ** matriz, char ** matriz2 , struct cartas *k);
int compareMatrix(int f, int c,  char ** matriz, char ** matriz2  );
//


void gameMode(struct tablero *t);
int pickCards (int f, int c, char ** matriz, char ** matriz2 , struct cartas *k);



#endif //PROYECTO_MEMORAMA_MEMORAMA_H
