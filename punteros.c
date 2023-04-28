#include <stdio.h>

/* -------------------------------------------------------------------------- */
/*                            Entendiendo punteros                            */
/* -------------------------------------------------------------------------- */

/* ------------------------------------ 1 ----------------------------------- */
/*
Dadas las definiciones de las variables en la siguiente porción de código ¿qué espera ver por pantalla utilizando los printf() a continuación? Explique la salida.
*/
/*
int main(void){
float * pfloat, manzana = 40.0, pera = 35.0;

printf("&pfloat: %p\n", &pfloat); //direccion de memoria de p
printf("&manzana: %p\n", &manzana); //direccion de memoria de manzana
printf("&pera: %p\n", &pera); //direccion de memoria de pera

printf("pfloat: %p\n", pfloat); // basura

pfloat = &manzana;
printf("pfloat: %p\n", pfloat); //direccion de manzana
printf("*pfloat: %f\n", *pfloat); //valor que contiene manzana

pfloat = &pera;
printf("pfloat: %p\n", pfloat); //direccion de pera
printf("*pfloat: %f\n", *pfloat); //valor que contiene pera

}
*/
/* ------------------------------------ 2 ----------------------------------- */
/*
Indicar el significado de las siguientes expresiones, cuáles son correctas, cuáles incorrectas y por qué.
*/
/*
int main(void) {
    int i = 3, *pint;    // correcto
    float f = 10.0;      // correcto

    pint = &i;     // "i" no es un puntero
    *pint = 10;    // correcto
    *pint = f;     // "f" es float mientras que "pint" es un puntero a entero
    pint = &f;
    pint = 4321;    // correcto

    return 0;
}
*/
/* ------------------------------------ 3 ----------------------------------- */
// Analizar las siguientes expresiones. Indicar si hay errores y justificar.
/* ------------------------------------ a ----------------------------------- */
/*
int main(void) {
    float var, set[] = {1.0, 2.0, 3.0, 4.0, 5.0};    // correcto
    float *p;                                        // correcto
    p = set;                                         // es igual a p = &set[0]; // correcto
    var = *p;                                        // es igual a var = set[0]; // correcto
    *p = 10.0;                                       // es igual a set[0]=10.0; // correcto

    return 0;
}
*/

/* ------------------------------------ b ----------------------------------- */
/*
int main(void) {
    int conj[5], list[] = {5, 4, 3, 2, 1};    // conj[5] contiene basura //correcto
    int *punt;                                // correcto

    punt = list;     // es igual a punt = &list[0]; //correcto
    conj = punt;     // incorrecto, no se puede asignar un puntero a un arreglo
    list = conj;     // incorrecto, no se puede asignar un arreglo a otro arreglo
    punt = &conj;    // es igual a punt = &conj[0]; //correcto

    return 0;
}
*/
/* ------------------------------------ c ----------------------------------- */
/*
int main(void) {
    int *pint, arrayint[5];          // correcto
    float *pfloat, arrayfloat[5];    // correcto

    pint = arrayint;        // es igual a pint = &arrayint[0]; //correcto
    pfloat = arrayfloat;    // es igual a pfloat = &arrayfloat[0]; //correcto
    pint += 1;              // es igual a pint = &arrayint[1]; //correcto
    pfloat += 1;            // es igual a pfloat = &arrayfloat[1]; //correcto
    pint++;                 // es igual a pint = &arrayint[2]; //correcto
    pfloat++;               // es igual a pfloat = &arrayfloat[2]; //correcto
    pint -= 1;              // es igual a pint = &arrayint[1]; //correcto
    pfloat -= 1;            // es igual a pfloat = &arrayfloat[1]; //correcto

    return 0;
}
*/

