/* Autor: Oscar Vivaldi Partido Ramirez, realizado: 03/02/2022

prrograma que un temperatura en grados centigrados y lo convierte a grados fahrenheit

*/

#include <stdio.h>

int main(){

//declaracion de variables

float C, F;

//entrada de datos

printf("introduce la temperatura en Centigrados; \n");

scanf("%f",&C);

//proceso

F=(9/5*C)+32;

//salida

printf("la temperatura en Fahrenheit es %f",F);

return 0;

}
