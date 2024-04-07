#ifndef NOTAS_FACULTAD_H
#define NOTAS_FACULTAD_H
#include <iostream>
#include <iomanip>
#include <string>

//Declaracion de Constantes
#define NUMERO_ALUMNOS 5
#define NUMERO_MATERIAS 5
#define NUMERO_NOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100
//Declaracion de Prototipos de Funcion
void llamaCiclo();   //Funcion que controla el Ciclo comparativo de datos por todas las facultades
int busquedaAleatorios(int minimo, int maximo); //Funcion que permite obtener valores aleatorios en las notas de cada alumno
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]); //Funcion que permite asignar a cada alumno las notas aleatorios
void imprimirMatrizLinea(); //Funcion que apoya el despliegue de titulos en el comparativo de facultades
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], std::string nombreFacultad);
//Funcion que permite el despliegue de cada facultad con sus alumnos y el calculo de promedios (menor y mayor)

#endif


