/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 17/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa 
Materia: Programación Estructrada 
Ciclo: 01/2022

Este es un programa de ciclos en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables enteras y flotantes
    -printf para mostrar varias variables
	-scanf
    -El uso de include para las librerias
    -While
    -Contador
    -Comentarios para la doumentación interna del programa.
*/
#include<stdio.h>
int main() {
	//Declaración de variables
	float numero, suma=0;
	int i=0; //contador
	//Proceso
	while(i<20) { //Ciclo
		printf("Introduce un numero %d: ", i);
		scanf("%f", &numero);
		suma=suma+numero;
		i++;
	}
	//Salida
	printf("La suma es %.2f", suma);
	return 0;	
}
