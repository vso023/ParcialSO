# INFORME PARCIAL SO Y REDES
Natalia Giraldo Amador - Valerie Sofia Olave Pineda

## Estructura general

Dentro del proyecto contamos con 3 archivos .c y un makefile, organizados de la siguiente manera:

- **hello.c**: Se cuenta con un "Hola mundo" con manejo de errores mínimo.
- **sumatoria.c**: Suma de números que se reciben como parametros en la línea de comando.
- **Operaciones.c**: Programa donde recibe por escaner dos números y ejecuta operaciones matemáticas básicas (suma, resta, multiplicación y división); además de que recibe nombre completo para realizar operaciones con cadenas de caracteres como el conteo de los mismos o retornar la primer inicial.
- **Makefile**: Compila los archivos.

![LS](\\wsl$\Ubuntu\home\valerie\VSOP_30000117256\imagenes\ls.jpg)


## Compilación

Para la compilación se ejecutó el comando "gcc -g archivo.c -o NombreEjecutable. Donde nos permitió generar el ejecutable para cada uno de los .c. Además de esto para la ejecución realizamos el comando "./NombreEjecutable".

## Ejecución de los programas y depuracion con gdb.
![Ejecuciones sin warnings](\\wsl$\Ubuntu\home\valerie\VSOP_30000117256\imagenes\ejecucionesnowarning.jpg)


### Operaciones.c
Al ejecutar este obtuvimos mediante el bash las entradas por consola para hacer las operaciones necesarias, ademas se realizo una depuracion simple usando gdb

![Operaciones](\\wsl$\Ubuntu\home\valerie\VSOP_30000117256\imagenes\operaciones.jpg)
![Operaciones GDB](\\wsl$\Ubuntu\home\valerie\VSOP_30000117256\imagenes\gdboperaciones.jpg)
![Operaciones con valores de entrada invalidos](\\wsl$\Ubuntu\home\valerie\VSOP_30000117256\imagenes\excepcionesoperaciones.jpg)

### Hello.c
Al ejecutar este observamos como el programa funcionaba de manera correcta, de igual manera se realizo una depuracion simple con gdb.


![Hello](\\wsl$\Ubuntu\home\valerie\VSOP_30000117256\imagenes\hello.jpg)

### Sumatoria.c
Al realizar la ejecución de este programa vimos diferentes casos, donde visualizabamos el manejo de errores y se depuraba con gdb. 

![Sumatoria](\\wsl$\Ubuntu\home\valerie\VSOP_30000117256\imagenes\sumatoria.jpg)
![Sumatoria con valores de entrada invalidos](\\wsl$\Ubuntu\home\valerie\VSOP_30000117256\imagenes\invalidsumatoria.jpg)

## Makefile

![Makefile](\\wsl$\Ubuntu\home\valerie\VSOP_30000117256\imagenes\make.jpg)


## CONCLUSIONES

- El proyecto compila de manera correcta según lo esperado 
- Se demostró la depuración con gdb para evidenciar el comportamiento de los programas
- Hubo inconvenientes a la hora de la depuración con gdb, no comprendiamos totalmente lo que tocaba realizar y a veces al realizar los comandos correctos no se depuraba de manera adecuada