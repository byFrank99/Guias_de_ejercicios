#include <math.h>
#include <stdio.h>

/* ------------------------------------ 1 ----------------------------------- */
/*
Escribir una función que reciba el capital inicial, una tasa de interés y un número de años y devuelva el monto final a cobrar. La fórmula a utilizar es: Cn = C * (1 + x / 100) ^ 2
Donde "C" es el capital inicial, "x" es la tasa de interés y "n" es el número de años a calcular.
*/
/*
double monto_final (double capital_inicial, double tasa_interes, int anios){
    return capital_inicial * pow(1 + tasa_interes / 10, 2);
}

int main(void){
    printf("El monto final es: $%.2f\n", monto_final(100, 12, 4 ));
    return 0;
}
*/
/* ------------------------------------ 2 ----------------------------------- */
/*
Escribir una función que convierta un valor en grados Fahrenheit a grados Celsius. La fórmula que los relaciona es
C = (F - 32) * 5 / 9
*/
/*
float fahrenheit_celsius (float fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}

int main(void){
    printf("La conversion es: %.2f°C\n", fahrenheit_celsius(20));
    return 0;
}
*/
/* ------------------------------------ 3 ----------------------------------- */
/*
Escribir una función que convierta un valor en grados Celsius a grados Fahrenheit.
F = (9 / 5) * C + 32
*/
/*
float celsius_fahrenheit(float celsius){
    return (9/5)*celsius + 32;
}

int main(void){
    printf("La conversion es: %.2f°F\n", celsius_fahrenheit(20));
    return 0;
}
*/
/* ------------------------------------ 4 ----------------------------------- */
/*
Escribir una función que dadas la hora, minutos y segundos devuelva el tiempo en segundos.
*/
/*
int segundos_totales(int hora, int minutos, int segundos){
    return hora * 3600 + minutos * 60 + segundos;
}
int main(void){
    printf("Los segundos totales son: %d\n",segundos_totales(1, 1, 60));
    return 0;
}
*/
/* ------------------------------------ 5 ----------------------------------- */
/*
Escribir una función que dadas las coordenadas de un vector en R3(x,y,z) , devuelva la norma del mismo dada por
raiz(x^2 + y^2 + z^2)
*/
/*
float norma(int x, int y, int z){
    return sqrt(x*x + y*y + z*z);
}
int main(void){
    printf("La norma del vector (%d,%d,%d) es: %.2f\n",1,2,3,norma(1,2,3));
    return 0;
}
*/
/* ------------------------------------ 6 ----------------------------------- */
/*
Teniendo el radio de un cilindro y su altura escribir funciones que calculen: diametro, circunferencia,area de la base, volumen y area del cilindro. (Notar que algunas funciones pueden resolverse llamando a las ya programadas.)
*/

float diametro(float radio, float altura) {
    double pi = 3.1415926535897932;
    return pi * radio * radio * altura;    // seria recomendable usar un DEFINE para el PI
}
float circunferencia(float radio) {
    double pi = 3.1415926535897932;
    return 2 * pi * radio;
}
float area_base(float radio) {
    double pi = 3.1415926535897932;
    return pi * radio * radio;    // podria usar la funcion "pow"
}
float volumen(float radio, float altura) {
    return area_base(radio) * altura;
}
float area_cilindro(float radio, float altura) {
    return circunferencia(radio) * altura;
}
