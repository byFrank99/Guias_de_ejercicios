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
/*
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
*/
/* ------------------------------------ 7 ----------------------------------- */
/*
Escribir una función que dado un número entero devuelva 1 si el mismo es impar y 0 si fuera par.
*/
/*
int es_par (int numero){
    if(numero % 2 == 0){
    printf("Par.\n");
    return 0;
    }
    printf("Impar\n");
    return 0;
}
int main(void){
    es_par(100);
    return 0;
}
*/
/* ------------------------------------ 8 ----------------------------------- */
/*
Escribir una función que dado un número devuelva el primer número múltiplo de 10 inferior a él. Por ejemplo, para 153 debe devolver 150.
*/
/*
int primer_multiplo(int numero){
    return numero - (numero % 10);
}
int main(void){
    printf("El primer multiplo de 10 es: %d\n", primer_multiplo(153));
    return 0;
}
*/
/* ------------------------------------ 9 ----------------------------------- */
/*
Escribí una función que compare (reciba) 2 números enteros a y b. La función debe retornar un número menor, igual o mayor que cero si a es, respectivamente, menor que, igual a, o mayor que b.
*/
/*
int comparar(int a, int b){

    a <= b ? printf("0\n") : printf("-1\n");
    return 0;
}

int main(void){
    comparar(2,-3);
    return 0;
}
*/
/* ----------------------------------- 10 ----------------------------------- */
/*
Escribir una función que reciba un número entero y devuelva 1 si el número es positivo y -1 si el número es negativo.
*/
/*
int es_positivo(int a){
    if(a > 0){
        printf("Es positivo.\n");
        return 0;
    } else if(a < 0){
        printf("Es negativo.\n");
        return 0;
    }else
    printf("Es neutro.\n");
    return 0;
}
int main(void) {
    es_positivo(5);
    return 0;
}
*/
/* ----------------------------------- 11 ----------------------------------- */
/*
Similar al ejercicio 10
*/
/* ----------------------------------- 12 ----------------------------------- */
/*
Escribir un programa que imprima, en 3 líneas separadas, su nombre, apellido y padrón.
*/
/*
int main(void) {
    printf("Nicasio\n");
    printf("Maciel\n");
    printf("123456\n");
    return 0;
}
*/

/* -------------------------------------------------------------------------- */
/*                         Programas sencillos: Ciclos                        */
/* -------------------------------------------------------------------------- */
/* ----------------------------------- 13 ----------------------------------- */
/*
Escribir un programa que imprima la tabla de multiplicar del número 7.
*/
/*
int main(void) {
    printf("La tabla del 7 (hasta el 10)\n");
    int i = 0;
    while(i <=10){
        int numero = 7 * i;
        printf("7 * %d = %d\n", i, numero);
        i++;
    }
}
*/
/* ----------------------------------- 14 ----------------------------------- */
/*
Escribir un programa que imprima la tabla de multiplicar para los números del 1 al 10.
*/
/*
int main(void) {
    int i = 0, j = 0;
    for (i = 0; i <= 10; i++) {
        printf("Tabla del %d\n", i);
        for (j = 0; j <= 10; j++) {
            int numero = i * j;
            printf("%d\n", numero);
        }
    }
    return 0;
}
*/
/* ----------------------------------- 15 ----------------------------------- */
/*
Escribir un programa que imprima la tabla de conversión de Celsius a Fahrenheit para los valores de 0ºC a 100ºC de 10 en 10 con 2 decimales.

Nota: Utilizar la función programada en el ejercicio 3
*/
/*
int main(void) {
    for(int i = 0; i <=100; i+=10){
        celsius_fahrenheit(i);
        printf("%d°C = %.2f°F\n", i,celsius_fahrenheit(i));
    }
    return 0;
}
*/
/* ----------------------------------- 16 ----------------------------------- */
/*
Escribir un programa que imprima por pantalla todas las fichas del dominó, sin repetir.
*/
/*
int main(void) {
    for(int i = 1; i <= 6; i++){
        printf("Ficha con %d\n", i);
        for(int j = 01; j <= 6; j++){
            printf("%d - %d\n", i, j);
        }
    }
    return 0;
}
*/
