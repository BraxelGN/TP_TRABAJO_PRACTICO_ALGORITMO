#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAX_ESPACIO = 10
#define MAX_DIAS = 7
#define MAX_HORAS 24.0
#define PRECIO_MOTOS 50
#define PRECIO_AUTOS 75
#define PRECIO_CAMIONETAS 100
//UN ESTACIONAMIENTO DE 10 ESPACIOS SOLICITO UN PROGRAMA QUE ALMACENE DATOS POR DIAS DE LA SEMANA (1 a 7)

/*
EL SISTEMA DEL ESTACIONAMIENTO CUENTA CON CATEGORIAS PARA CALCULAR EL COSTO POR HORA
50$ x HORA MOTOS
75$ x HORA AUTOS
100$ x HORA CAMINETAS
 xd

CAT 'M','A','C' (CHAR)

HORAS DE ESTADIA DEL VEHICULO (FLOAT)

ESPACIO DEL ESTACIONAMIENTO ELEGIDA (1 al 10) (INT)

TAMBIEN PARA PERMANECER EL DUEÑO DEL VEHICULO DEBE DE DECLARAR LA PANTENTE PARA MOTOS DEBE TENER 7 CARACTERES y 6 PARA AUTOS Y CAMIONETAS
STR

1. QUE DIA ESTACIONARON MAS MOTOS
2. CANTIDAD DE AUTOS ESTACIONADOS EL DOMINGO
3. QUE ESPACIO DE ESTACIONAMIENTO FUE LA MAS SOLICITADA Y CUAL MENOS
4. DEL MIERCOLES, LA PATENTE DE LA CAMIONETA QUE MAS TIEMPO ESTUVO ESTACIONADO

5. TOTAL DE VEHICULOS ESTACIONADOS POR TIPO
6. TOTAL RECAUDADO DE LA SEMANA
7. DIA QUE MAS SE RECAUDO
*/
//FUNCIONES
float validar_horas(float horas_min,float horas_max){
	float horas;
	do{
	
	printf("\n INGRESE CUANTAS HORAS ESTUVO  ESTACIONADO EL VEHICULO ESTACIONADO: ");
	scanf("%f",&horas);
	
	}while(horas<horas_min && horas>horas_max);
	
	return horas;

}//VALIDA QUE LAS HORAS DE ESTACIONAMIENTO NO SEAN MENORES A 0 y TAMPOCO MAYORES A 24 x DIA

int validar_estacionamiento(int estacionamiento_min,int estacionamiento_max){
	int estacionamiento;
	do{
	
	printf("\n INGRESE EN QUE LUGAR ESTUVO ESTACIONADO EL VEHICULO ESTACIONADO: ");
	scanf("%d",&estacionamiento);
	
	}while(estacionamiento<estacionamiento_min && estacionamiento>estacionamiento_max);
	
	return estacionamiento;

}

float obtener_precio(char categoria) {
   
    switch (categoria) {
        case 'M':
            return 50.0;
        case 'A':
            return 75.0;
        case 'C':
            return 100.0;
        default:
            return 0.0;
    }
}// Función que recibe una categoría de vehículo y devuelve el costo por hora correspondiente

float calcular_costo(float horas, char categoria) {
    float precio = obtener_precio(categoria);
    return horas * precio;
}// Función que recibe la cantidad de horas estacionadas y la categoría de vehículo, y devuelve el costo total


int main(int argc, char** argv) {
	//VARIABLES
	int i;
	
	//VARIABLES INGRESADAS POR EL USUARIO
	char categoria;
	int estacionamiento=0;
	float horas_de_estadia=0.0;
	char patente[8];
	
	printf("\n  88888888b .d88888b  d888888P  .d888888   a88888b. dP  .88888.  888888ba   .d888888  8888ba.88ba  dP  88888888b 888888ba  d888888P  .88888.  \n");
	printf("\n   88        88.    '    88    d8'    88  d8'   `88 88 d8'   `8b 88    `8b d8'    88  88  `8b  `8b 88  88        88    `8b    88    d8'   8b \n");
	printf("\n  a88aaaa    `Y88888b.    88    88aaaaa88a 88        88 88     88 88     88 88aaaaa88a 88   88   88 88 a88aaaa    88     88    88    88     88\n");
	printf("\n   88              `8b    88    88     88  88        88 88     88 88     88 88     88  88   88   88 88  88        88     88    88    88     88 \n");
	printf("\n   88        d8'   .8P    88    88     88  Y8.   .88 88 Y8.   .8P 88     88 88     88  88   88   88 88  88        88     88    88    Y8.   .8P \n");
	printf("\n  88888888P  Y88888P     dP    88     88   Y88888P' dP  `8888P'  dP     dP 88     88  dP   dP   dP dP  88888888P dP     dP    dP     `8888P'  \n");
	printf("\n  ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo  \n");
	
	
	for(i=0;i<7;i++){
		fflush(stdin);
		printf("\n\n Ingrese CAT del vehiculo: ");
		scanf("%c",&categoria);
		fflush(stdin);
		
		printf(" Ingrese la patente del vehiculo: ");
		gets(patente);
		switch(categoria){
		case 'M':
			do{
				fflush(stdin);
				printf("Ingrese la patente del vehiculo: ");
				gets(patente);
			}while(strlen(patente)<6 && strlen(patente)>8);
            break;
        case 'A':
        	do{
				fflush(stdin);
				printf("Ingrese la patente del vehiculo: ");
				gets(patente);
			}while(strlen(patente)<5 && strlen(patente)>7);
        	break;
        case 'C':
        	do{
				fflush(stdin);
				printf("Ingrese la patente del vehiculo: ");
				gets(patente);
			}while(strlen(patente)<5 && strlen(patente)>7);
            break;	
        }
        
		horas_de_estadia=validar_horas(0,24);
        estacionamiento=validar_estacionamiento(0,10);
	}
	
	
	return 0;
}
