#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
void mostrarCategoria(char cat)
{
    switch (cat)
    {
    case 'm':
        printf("moto\n");
        break;
    case 'a':
        printf("auto \n ");
        break;
    case 'c':
        printf("camioneta \n");
        break;
    }

}

void mostrarDia(int dia)
{
    printf("\nDIA: ");
    switch(dia)
    {
    case 0:
        printf("LUNES\n \n");
        break;
    case 1:
        printf("MARTES\n\n");
        break;
    case 2:
        printf("MIERCOLES\n\n");
        break;
    case 3:
        printf("JUEVES\n\n");
        break;
    case 4:
        printf("VIERNES\n\n");
        break;
    case 5:
        printf("SABADO\n\n");
        break;
    case 6:
        printf("DOMINGO\n\n");
        break;
    }
}
void mostrarTicket(char categoria, int espacio, char patente[], float horasEstadia, float precio)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);

    printf("\n VEHICULO: ");
    mostrarCategoria(categoria);
    printf("\n LUGAR DE ESTACIONAMIENTO: %d \n", espacio);
    printf("\n PATENTE: %s\n", patente);
    printf("\n HORAS DE ESTADIA: %.2f \n", horasEstadia);
    printf("\n COSTO: %.2f\n", precio);

    printf("\nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("\t\t\t\t\t!GRACIAS POR VENIR AL ESTACIONAMIENTO!");
    printf("\nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}


int main()
{
	 
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int autosDomingo = 0;
    char camionetaMasTiempo[7];
    int contadorMotos = 0, contadorAutos = 0, contadorCamionetas = 0;
    float recaudacionTotal = 0, maxDuracionCamioneta=0;
    int flag=0;

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    printf("\n  88888888b .d88888b  d888888P  .d888888   a88888b. dP  .88888.  888888ba   .d888888  8888ba.88ba  dP  88888888b 888888ba  d888888P  .88888.");
    printf("\n   88        88.    '    88    d8'    88  d8'   `88 88 d8'   `8b 88    `8b d8'    88  88  `8b  `8b 88  88        88    `8b    88    d8'    8b");
    printf("\n  a88aaaa    `Y88888b.    88    88aaaaa88a 88        88 88     88 88     88 88aaaaa88a 88   88   88 88 a88aaaa    88     88    88    88     88");
    printf("\n   88              `8b    88    88     88  88        88 88     88 88     88 88     88  88   88   88 88  88        88     88    88    88     88");
    printf("\n   88        d8'   .8P    88    88     88  Y8.   .88 88 Y8.   .8P 88     88 88     88  88   88   88 88  88        88     88    88    Y8.   .8P");
    printf("\n  88888888P  Y88888P     dP    88     88   Y88888P' dP  `8888P'  dP     dP 88     88  dP   dP   dP dP  88888888P dP     dP    dP     `8888P'  ");
    printf("\n  ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    int i;
    for (i = 0; i < 7;)
    {
        char categoria;
        float horasEstadia, precio;
        int espacio;
        char patente[7];
        mostrarDia(i);


        fflush(stdin);
        printf("Ingrese la categoria del vehiculo (M: moto, A: auto, C: camioneta): ");
        scanf(" %c", &categoria);

        categoria = tolower(categoria); // Convertir a minúscula

        printf("Ingrese las horas de estadia del vehiculo: ");
        scanf("%f", &horasEstadia);

        printf("Ingrese el espacio del estacionamiento elegido (1 al 10): ");
        scanf("%d", &espacio);

        if (espacio < 1 || espacio > 10)
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            printf("ERROR: El espacio de estacionamiento elegido es invalido. Seleccionar entre 1 y 10.\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            continue; //
        }

        switch (categoria)
        {
        case 'm':
            printf("Ingrese la patente de la moto (7 caracteres): ");
            scanf("%s", patente);
            if (strlen(patente) < 7 || strlen(patente) > 7)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                printf("ERROR: La patente de las motos debe de ser de 7 caracteres.\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                continue; //
            }
            contadorMotos++;
            precio = horasEstadia * 50;
            recaudacionTotal += precio;
            break;
        case 'a':
            printf("Ingrese la patente del auto (6 caracteres): ");
            scanf("%s", patente);
            if (strlen(patente) < 6 || strlen(patente) > 6)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                printf("ERROR: La patente de los autos debe de ser de 6 caracteres.\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                continue; //
            }
            if (i == 6)
        	{
            autosDomingo += 1;
        	}
            contadorAutos++;
            precio = horasEstadia * 75;
            recaudacionTotal += precio;
            break;
        case 'c':
            printf("Ingrese la patente de la camioneta (6 caracteres): ");
            scanf("%s", patente);
            if (strlen(patente) < 6 || strlen(patente) > 6)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                printf("ERROR: La patente de las camionetas debe de ser de 6 caracteres.\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                continue; //
            }
            precio = horasEstadia * 100;
            contadorCamionetas++;
            recaudacionTotal += precio;
            /* BANDERA*/
            if(i==2)
            {

                if(flag==0)
                {
                    maxDuracionCamioneta = horasEstadia;
                    strcpy(camionetaMasTiempo, patente);
                    flag=1;
                }

                if(flag==1)
                {
                    if (horasEstadia > maxDuracionCamioneta)
                    {
                        maxDuracionCamioneta = horasEstadia;
                        strcpy(camionetaMasTiempo, patente);
                    }
                }
            }


            break;
        default:
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            printf("ERROR: La categoria ingresada es invalida. Seleccionar entre M, A o C.\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            continue;
        }
        //MOSTRAR VALORES INGRESADOS
        /*PREGUNTAR POR EL TICKET*/
        fflush(stdin);
        char visualizarTicket;
        printf("\nDesea visualizar el ticket? (S: si, N: no): ");
        scanf("%c",&visualizarTicket);
        fflush(stdin);
        visualizarTicket = tolower(visualizarTicket);

		if (visualizarTicket == 's')
		{
    		mostrarTicket(categoria, espacio, patente, horasEstadia, precio);
		}



        char opcion;
        printf("\nDesea continuar al siguiente dia? (S: si, N: no): ");
        scanf(" %c", &opcion);
        fflush(stdin);
        opcion = tolower(opcion); // Convertir a minúscula

        if (opcion == 's')
        {
            i++;
        }
    }

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("\n  ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    printf("\n 1. Cantidad de autos estacionados el domingo: %d\n", autosDomingo);
    printf(" 2. Patente de la camioneta que mas tiempo estuvo estacionada el miercoles: %s\n", camionetaMasTiempo);
    printf(" 3. Total de vehiculos estacionados por tipo - Motos: %d, Autos: %d, Camionetas: %d\n", contadorMotos, contadorAutos, contadorCamionetas);
    printf(" 4. Total recaudado de la semana: $%.2f\n", recaudacionTotal);
    printf("\n  ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    return 0;
}
