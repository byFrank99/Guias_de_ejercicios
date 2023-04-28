#include <stdbool.h>
#include <stdio.h>

/* -------------------------------------------------------------------------- */
/*                   Funciones con arreglos unidimensionales                  */
/* -------------------------------------------------------------------------- */
/* ------------------------------------ 8 ----------------------------------- */
/*
(matemática) Implementar funciones que reciban un arreglo de números y su longitud y realicen las siguientes operaciones:
a) completar el vector con ceros,
*/
/*
void vec_ceros(size_t n, int vector[n]) {
    for (size_t i = 0; i < n; i++)
        vector[i] = 0;
}

int main(void) {
    int vector[4];
    vec_ceros(4, vector);

    for (size_t i = 0; i < 4; i++)
        printf("%d\t", vector[i]);

    return 0;
}
*/
/*
b) completar el vector con unos,
*/
/*
void vec_unos(size_t n, int vector[n]) {
    for (size_t i = 0; i < n; i++)
        vector[i] = 1;
}

int main(void) {
    int vector[5];
    vec_unos(5, vector);

    for (size_t i = 0; i < 5; i++)
        printf("%d\n", vector[i]);

    return 0;
}
*/
/*
c) calcular y retornar la suma,
*/
/*
void vec_suma(size_t n, int vector[n], int incremento) {
    for (size_t i = 0; i < n; i++)
        vector[i] += incremento;
}

int main(void) {
    int vector[5] = {0, 1, 2, 3, 4};
    vec_suma(5, vector, 3);

    for (size_t i = 0; i < 5; i++)
        printf("%d\n", vector[i]);

    return 0;
}
*/

/*
d) calcular y retornar la media,
*/
/*
double vec_media(size_t n, int vector[n]) {
    double aux = 0;
    size_t i;
    for (i = 0; i < n; i++) {
        aux += vector[i];
    }
    return aux / i;
}

int main(void) {
    int vector_1[] = { 0, 1, 2, 3, 4, 5};
    printf("La media del vector es: %f\n", vec_media(6, vector_1));
    return 0;
}
*/
/*
e) calcular y retornar la varianza,
*/
/*
double vec_varianza(size_t n, vector[n]){

}
*/

/*
f) retornar el valor máximo del arreglo,
*/
/*
int vec_max(size_t n, int vector[n]) {
    int aux = vector[0];
    for (size_t i = 0; i < n; i++) {
        if (vector[i] > aux)
            aux = vector[i];
    }

    return aux;
}

int main() {
    int vector[] = {0, 1, 22, 3, 4, -5};
    printf("El mayor numero del vector es: %d\n", vec_max(6, vector));
    return 0;
}
*/
/*
g) retornar el valor mínimo del arreglo,
*/
/*
float vec_min(size_t n, float vector[n]) {
    float aux = vector[0];
    for (size_t i = 0; i < n; i++) {
        if (vector[i] < aux)
            aux = vector[i];
    }
    return aux;
}

int main(void){
    float vector[] = {0,1,2,-3,4,5, -3.5,6};
    printf("El menor valor del vector es: %.2f\n", vec_min(7, vector));
    return 0;
}
*/
/*
h) modificar los elementos del vector reemplazándolos por sus valores al cuadrado,
*/
/*
void vec_cuad(size_t n, int vector[n]) {
    for (int i = 0; i < n; i++)
        vector[i] *= vector[i];
}

int main(void) {
    int vector[] = {0, 1, 2, 3, 4, 5};
    vec_cuad(6, vector);
    for (size_t i = 0; i < 6; i++) {
        printf("El vector al cuadrado es: %d\n", vector[i]);
    }
    return 0;
}
*/
/* ------------------------------------ 9 ----------------------------------- */
/*
Implementar una función que reciba 2 vectores y sus longitudes, y copie el contenido de uno en el otro, usando el siguiente prototipo:
bool veccpy(double dest[], size_t ldest, const double orig[], size_t lorig);

La función debe retornar false en caso de no poder completar la operación.
*/
/*
bool veccpy(double dest[], size_t ldest, const double orig[], size_t lorig) {
    if (ldest != lorig)
        return false;
    for (size_t i = 0; i < lorig; i++)
        dest[i] = orig[i];
    return true;
}

int main(void) {
    double vector_1[] = {0, 1, 2, 3, 4, 5};
    double vector_2[6];
    veccpy(vector_2, 6, vector_1, 6);

    for (size_t i = 0; i < 6; i++)
        printf("%.2f\n", vector_2[i]);
return 0;
}
*/
/* ----------------------------------- 10 ----------------------------------- */
/*
Implementar una función que reciba 2 vectores y sus longitudes, y retorne un valor booleano indicando si los vectores son iguales.
*/
/*
bool son_iguales(size_t n_origen, int vector_1[n_origen], size_t n_destino, int vector_2[n_destino]) {
    if (n_origen != n_destino) {
        printf("No son iguales :C\n");
        return false;
    }

    for (size_t i = 0; i < n_origen; i++) {
        if (vector_1[i] != vector_2[i]) {
            printf("No son iguales :C\n");
            return false;
        }
    }
    printf("Son iguales :D\n");
    return true;
}

int main(void) {
    int vector_1[5] = {1, 2, 3, 4, 5};
    int vector_2[5] = {1, 2, -3, 4, 5};

    son_iguales(5, vector_1,5, vector_2);
    return 0;
}
*/

/* -------------------------------------------------------------------------- */
/*                  Funciones con arreglos multidimensionales                 */
/* -------------------------------------------------------------------------- */
/* ----------------------------------- 16 ----------------------------------- */
/*
Escriba una función que muestre por la pantalla una matriz de filas y columnas.
*/
/*
int matriz_mostrar(size_t n, size_t m, int matriz[n][m]) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++)
            printf("%d\t", matriz[i][j]);
        puts("\n");
    }
    return 0;
}

int main(void) {
    int matriz[4][3] = { { 0, 1, 2}, { 1, 2, 3}, { 0, 1, 2,}, {8, 9, 1}};
    matriz_mostrar(4, 3, matriz);
    return 0;
}
*/
/* ----------------------------------- 18 ----------------------------------- */
/*
Para cada inciso escriba una función que
a) dada una matriz R NXN calcule su traza (suma de los elementos de la diagonal principal),
*/
// int traza(size_t n, int m[n][n]) {
//     size_t aux = 0;
//     for (size_t i = 0; i < n; i++) {
//         for (size_t j = 0; j < n; j++) {
//             if (i == j)
//                 aux += m[i][j];
//         }
//     }
//     return aux;
// }
// int main(void){
//     int m[3][3] = { {0,1,2},
//                     {1,2,3},
//                     {1,2,9}};
//     printf("La suma de la traza es: %d\n", traza(3, m));
//     return 0;
// }
/*
b) dada una matriz NxM y un número modifique la matriz sumando a cada componente el número recibido,
*/
// void suma_comp(size_t n, size_t m, int matriz[n][m], int numero) {
//     for (size_t i = 0; i < n; i++) {
//         for (size_t j = 0; j < m; j++) {
//             matriz[i][j] += numero;
//         }
//     }
// }
// int main(void) {
//     int matriz[3][2] = {{1, 2}, {9, 1}, {6, 5}};
//     suma_comp(3, 2,matriz, 1);
//     for (size_t i = 0; i < 3; i++) {
//         for (size_t j = 0; j < 2; j++) {
//             printf("%d\t", matriz[i][j]);
//         }
//         puts("\n");
//     }
//     return 0;
// }

/*
f) sólo para matrices de 2X2 ó 3X3: calcule el determinante,
*/
// int determinante(size_t n, int m[n][n]) {
//     if (n != 2 && n != 3)
//         return 1;
//     size_t aux = 1;
//     for (size_t i = 0; i < n; i++) {
//         for (size_t j = 0; j < n; j++) {
//             if (i == j)
//                 aux *= m[i][j];
//         }
//     }
//     return aux;
// }

// int main(void) {
//     int matriz[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
//     printf("%d\n", determinante(3, matriz));
//     return 0;
// }

// h) retorne el máximo elemento de la matriz,

// int max(size_t n, size_t m, int matriz[n][m]) {
//     int aux = matriz[0][0];
//     for (size_t i = 0; i < n; i++) {
//         for (size_t j = 0; j < m; j++) {
//             if (aux < matriz[i][j]) {
//                 aux = matriz[i][j];
//                 i++;
//             }
//         }
//     }
//     return aux;
// }

void imprimir_numero(int n){
    
}