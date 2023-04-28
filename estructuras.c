#include <stdbool.h>
#include <stdio.h>

/* ------------------------------------ 1 ----------------------------------- */
// Definí las estructuras que se piden en los siguientes incisos:
/* ------------------------------------ a ----------------------------------- */
/*
Una estructura para manejar inventarios que contenga un campo para la descripción del producto (máximo 30 caracteres), un número para el número de parte en el inventario, un punto flotante para el precio, un entero para la cantidad que hay en el almacén y un entero para el lugar donde se almacena.
*/
typedef struct {
    char descripcion[30];
    int numero;
    float precio;
    int cantidad;
    int lugar;
} inventario_t;

/* ------------------------------------ b ----------------------------------- */
/*
Una para manejar una dirección física que contiene arreglos para el país (máximo 40 caracteres), la provincia (máximo 30 caracteres), la ciudad (máx. 20), la dirección (máx. 30) y el código postal (10).
*/
typedef struct {
    char pais[40];
    char provicia[30];
    char ciudad[20];
    char direccion[30];
    int cp[10];
} dirrecion_t;

/* ------------------------------------ c ----------------------------------- */
/*
Una persona, con un arreglo para el nombre, otro para el apellido y una estructura como la del inciso anterior.
*/
typedef struct {
    char nombre[15];
    char apellido[15];
    char pais[40];
    char provicia[30];
    char ciudad[20];
    char direccion[30];
    int cp[10];
} persona_t;

/* ------------------------------------ d ----------------------------------- */
/*
Una estructura, registro, que nos sirva para mantener un registro de los consumos de un vehículo, como en el último ejercicio de la guía 1. Para ello, debe contener un número para almacenar una cantidad de kilómetros, un número real para almacenar el costo del combustible, un número real para almacenar el dinero utilizado en una recarga, un time_t para almacenar la fecha, un booleano para indicar si se llenó el tanque y un arreglo para almacenar algún comentario.
*/
typedef struct {
    int kilometros;
    int costo_combustible;
    float dinero;
    bool esta_lleno;
    char comentario[50];
} registro_t;

/* ------------------------------------ 2 ----------------------------------- */
/* ------------------------------------ a ----------------------------------- */
// Definí una estructura punto que contenga las coordenadas de un punto en R2.
typedef struct {
    int x;
    int y;
} punto_t;

/* ------------------------------------ b ----------------------------------- */
// Definí un nuevo tipo utilizando la definición de la estructura punto.
