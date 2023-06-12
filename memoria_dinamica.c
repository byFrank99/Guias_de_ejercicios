#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* -------------------------------------------------------------------------- */
/*                            Funciones con cadenas                           */
/* -------------------------------------------------------------------------- */
/* ------------------------------------ 1 ----------------------------------- */
/* ------------------------------------ a ----------------------------------- */
/*
Implementá una función que reciba una cadena y retorne una copia de la misma, utilizando memoria dinámica, por el nombre. Si por algún motivo no se puede, retornar NULL.
*/
/*
char *copia_cadena(char *cadena) {
    if (cadena == NULL)
        return NULL;
    char *copia = malloc(strlen(cadena) + 1);
    if (copia == NULL)
        return NULL;
    // memcpy(copia, cadena, strlen(cadena) + 1); // en esta uso 2 funciones
    strcpy(copia, cadena); //en esta uso solo 1

    return copia;
}

int main(void) {
    char *cadena = "hola como estas";
    char *copia = copia_cadena(cadena);
    printf("%s\n", copia);
    free(copia);
    return 0;
}
*/
/*
Implementá 2 funciones equivalentes a las 2 funciones del punto anterior, pero en lugar de copiar una cadena, copian un arreglo de números.
*/

/* ----------------------------------- 12 ----------------------------------- */
/*
Implementá una función que reciba dos vectores de números y retorne un nuevo vector con los números de ambos vectores concatenados.
*/
// int *concatenar_vectores(int *v1, int *v2, size_t n1, size_t n2) {
//     if (v1 == NULL || v2 == NULL)
//         return NULL;
//     int *v3 = malloc(sizeof(int) * (n1 + n2));
//     if (v3 == NULL)
//         return NULL;
//     memcpy(v3, v1, sizeof(int) * n1);
//     memcpy(v3 + n1, v2, sizeof(int) * n2);
//     return v3;
// }
// int main(void){
//     int v1[] = {1,2,3,4,5};
//     int v2[] = {6,7,8,9,10};
//     size_t n1 = sizeof(v1) / sizeof(int);
//     size_t n2 = sizeof(v2) / sizeof(int);
//     int *v3 = concatenar_vectores(v1, v2, n1, n2);
//     for (size_t i = 0; i < n1 + n2; i++)
//         printf("%d ", v3[i]);
//     printf("\n");
//     free(v3);
//     return 0;
// }

/* ----------------------------------- 14 ----------------------------------- */
/*
Implementá una función que retorne una matriz dinámica, de un tamaño pasado como argumento, siendo la misma inicializada con:
*/
/* ------------------------------------ a ----------------------------------- */
// ceros,
/*
int **matriz_crear(size_t n, size_t m) {
    int **matriz = malloc(n * sizeof(int *));
    if (matriz == NULL)
        return NULL;
    for (size_t fila = 0; fila < n; fila++) {
        matriz[fila] = malloc(m * sizeof(int));
        if (matriz[fila] == NULL) {
            for (size_t i = 0; i < fila; i++)
                free(matriz[i]);
            free(matriz);
            return NULL;
        }
        for (size_t i = 0; i < m; i++) {
            matriz[fila][i] = 0;
        }
    }
    return matriz;
}
*/
/* ------------------------------------ b ----------------------------------- */
// unos
/*
int **matriz_crear(size_t n, size_t m) {
    int **matriz = malloc(n * sizeof(int *));
    if (matriz == NULL)
        return NULL;
    for (size_t fila = 0; fila < n; fila++) {
        matriz[fila] = malloc(m * sizeof(int));
        if (matriz[fila] == NULL) {
            for (size_t i = 0; i < fila; i++)
                free(matriz[fila]);
            free(matriz);
            return NULL;
        }
        for (size_t i = 0; i < m; i++)
            matriz[fila][i] = 1;
    }
    return matriz;
}

int main(void){
    int **matriz = matriz_crear(5, 5);
    for (size_t fila = 0; fila < 5; fila++) {
        for (size_t columna = 0; columna < 5; columna++)
            printf("%d ", matriz[fila][columna]);
        printf("\n");
    }
    return 0;
}
*/
/* ------------------------------------ c ----------------------------------- */
// la identidad,
int **m_id(size_t n, size_t m) {
    int **matriz = malloc(n * sizeof(int *));
    if (matriz == NULL)
        return NULL;
    for (size_t fila = 0; fila < n; fila++) {
        matriz[fila] = malloc(m * sizeof(int));
        if (matriz[fila] == NULL) {
            for (size_t i = 0; i < fila; i++)
                free(matriz[fila]);
            free(matriz);
            return NULL;
        }
        for (size_t i = 0; i < m; i++)
            matriz[fila][i] = (fila == i) ? 1 : 0;
    }
    return matriz;
}