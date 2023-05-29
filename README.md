# TP_TRABAJO_PRACTICO_ALGORITMO

//UN ESTACIONAMIENTO DE 10 ESPACIOS SOLICITO UN PROGRAMA QUE ALMACENE DATOS POR DIAS DE LA SEMANA (1 a 7)

/*
EL SISTEMA DEL ESTACIONAMIENTO CUENTA CON CATEGORIAS PARA CALCULAR EL COSTO POR HORA
50$ x HORA MOTOS
75$ x HORA AUTOS
100$ x HORA CAMINETAS
CAT 'M','A','C' (CHAR)
HORAS DE ESTADIA DEL VEHICULO (FLOAT)
ESPACIO DEL ESTACIONAMIENTO ELEGIDA (1 al 10) (INT)
TAMBIEN PARA PERMANECER EL DUEÑO DEL VEHICULO DEBE DE DECLARAR LA PANTENTE PARA MOTOS DEBE TENER 7 CARACTERES y 6 PARA AUTOS Y CAMIONETAS
STR

Al final de cada ingreso de datos, se muestran los datos ingresados, el total recaudado del estacionamiento.

Para pasar a el siguiente dia, se debe contestar una pregunta de S/N

Cuando finaliza la semana, imprime los siguientes pedidos:
1. CANTIDAD DE AUTOS ESTACIONADOS EL DOMINGO
2. DEL MIERCOLES, LA PATENTE DE LA CAMIONETA QUE MAS TIEMPO ESTUVO ESTACIONADO
3. TOTAL DE VEHICULOS ESTACIONADOS POR TIPO
4. TOTAL RECAUDADO DE LA SEMANA
*/

## Bibliotecas Utilizadas
El programa utiliza las siguientes bibliotecas estándar de C:
- `stdio.h`: Proporciona las funciones de entrada y salida estándar.
- `string.h`: Proporciona funciones para manipular cadenas de caracteres.
- `ctype.h`: Proporciona funciones para manipular caracteres.
- `windows.h`: Específica para el sistema operativo Windows, se utiliza para cambiar los colores de la consola.

Funciones Principales

### `mostrarCategoria(char cat)`
Esta función recibe un carácter que representa la categoría del vehículo (`m` para moto, `a` para auto, `c` para camioneta) y muestra por pantalla la categoría correspondiente.

### `mostrarDia(int dia)`
Esta función recibe un entero que representa el día de la semana (0 para lunes, 1 para martes, etc.) y muestra por pantalla el día correspondiente.

### `mostrarTicket(char categoria, int espacio, char patente[], float horasEstadia, float precio)`
Esta función muestra por pantalla un ticket con la información del vehículo estacionado, incluyendo su categoría, espacio asignado, patente, horas de estadía y costo. Además, utiliza la biblioteca `windows.h` para resaltar el texto en color verde.

### `main()`
La función principal del programa, que controla el flujo general del sistema de estacionamiento. En esta función se encuentran las siguientes variables y funcionalidades:

- Variables:
  - `autosDomingo`: Almacena la cantidad de autos estacionados el domingo.
  - `camionetaMasTiempo`: Almacena la patente de la camioneta que estuvo estacionada durante más tiempo el miércoles.
  - `contadorMotos`: Contador de motos estacionadas.
  - `contadorAutos`: Contador de autos estacionados.
  - `contadorCamionetas`: Contador de camionetas estacionadas.
  - `recaudacionTotal`: Almacena la recaudación total del estacionamiento.
  - `maxDuracionCamioneta`: Almacena la duración máxima de estancia de una camioneta.
  - `flag`: Bandera utilizada para controlar la comparación de duraciones de camionetas.

- Flujo del Programa:
  1. Se muestra por pantalla un mensaje de bienvenida en formato ASCII art.
  2. Se inicia un bucle que se ejecuta 7 veces, correspondiente a los días de la semana.
  3. Se solicita al usuario ingresar la categoría del vehículo (moto, auto o camioneta), las horas de estadía y el espacio de estacionamiento elegido.
  4. Se validan los datos ingresados por el usuario y se realiza el cálculo del costo de estacionamiento según la categoría y las horas de estadía.
  5. Se muestra un ticket con la información del vehículo estacionado, si el usuario lo solicita.
  6. Se solicita al usuario si desea continuar al siguiente día.


  7. Se realizan las estadísticas correspondientes sobre los datos ingresados durante la semana:
     - Cantidad de autos estacionados el domingo.
     - Patente de la camioneta que estuvo estacionada durante más tiempo el miércoles.
     - Total de vehículos estacionados por tipo (motos, autos, camionetas).
     - Recaudación total de la semana.
  8. Se muestra por pantalla el resumen de las estadísticas obtenidas.
  9. El programa finaliza su ejecución.

## Consideraciones adicionales
- Se utiliza la función `tolower()` para convertir la categoría del vehículo ingresada por el usuario a minúsculas, permitiendo una validación más flexible.
- Se utiliza la función `strlen()` para verificar la longitud de las patentes ingresadas y asegurar que cumplan con los requisitos (7 caracteres para motos y 6 caracteres para autos y camionetas).
- El programa utiliza la biblioteca `windows.h` para cambiar el color del texto en la consola y resaltar ciertos mensajes. Esta funcionalidad es específica para el sistema operativo Windows y no es portable a otros sistemas operativos.
