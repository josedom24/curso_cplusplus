# Introducción a los lenguajes de programación

Para que un ordenador realice un proceso, se le debe suministrar en primer lugar un algoritmo adecuado, que llamamos **programa**. El procesador debe ser capaz de interpretar el algoritmo, lo que significa:

* Comprender las instrucciones de cada paso.
* Realizar las operaciones correspondientes.

## Clasificación de los lenguajes de programación

### Lenguaje Máquina

Son aquellos que están escritos en lenguajes que directamente entiende el ordenador, ya que sus instrucciones son cadenas binarias (secuencias de
ceros y unos) que especifican una operación y las posiciones (dirección) de memoria implicadas en la operación. Se denominan instrucciones de máquina o **código máquina**. Características:

* Las instrucciones en lenguaje máquina dependen del hardware del ordenador y por tanto serán diferentes de un ordenador a otro.
* Se puede transferir un programa a memoria sin necesidad de traducción posterior, lo que supone una mayor velocidad de ejecución a cualquier otro lenguaje.
* Dificultad y lentitud en la codificación.
* Conjunto de instrucciones reducido (operaciones muy elementales)

### Lenguaje de bajo nivel (Ensamblador)

Los lenguajes de bajo nivel son más fáciles de  utilizar que  los lenguajes máquina, pero, al igual que ellos, dependen de la máquina en particular.
El lenguaje de bajo nivel por excelencia es el **ensamblador**.

Las instrucciones en lenguaje ensamblador son instrucciones conocidas como mnemónicos. 

Un programa escrito en lenguaje ensamblador no puede ser ejecutado directamente por la máquina, sino que requiere una fase de traducción al lenguaje máquina. El programa original escrito en lenguaje ensamblador se denomina **programa fuente** y el programa traducido en lenguaje máquina se conoce como **programa objeto**, ya directamente entendible por el ordenador.

### Lenguaje de alto nivel

Los lenguajes de alto nivel son los mas utilizados por los programadores. Están diseñados para que las personas escriban y entiendan los programas de un modo mucho más fácil que los lenguajes máquina y ensambladores. Otra razón es que un programa escrito en un lenguaje de alto nivel es independiente de la máquina, o sea, las instrucciones del programa del ordenador no dependen del diseño hardware de un ordenador en particular. Por lo tanto los programas escritos en lenguajes de alto nivel son portables o transportables, lo que significa la posibilidad de poder ser ejecutados con poca o ninguna modificación en diferentes tipos de ordenadores.

Al igual que sucede con los lenguajes ensambladores, los programas fuente tienen que ser traducidos por **programas traductores**, llamados en este caso
compiladores o intérpretes.

Ejemplos de lenguajes de programación de alto nivel:

BASIC, COBOL, PASCAL, C, VISUAL BASIC, JAVA, PYTHON, PERL, GO, PHP, RUBY,...

## Programas traductores

Los traductores transforman programas escritos en un lenguaje de alto nivel en programas escritos en código máquina. Podemos indicar distintos tipos:

### Compiladores

* Convierte un programa escrito en alto nivel (código fuente) a un programa máquina (código ejecutable).
* Para generar el código ejecutable el código no debe tener errores de sintaxis.
* Necesitamos un compilador para cada arquitectura y sistema operativo.
* Los programas ejecutables no son compatibles entre plataformas.
* Una vez generado el programa ejecutable, no es necesario tener el código fuente.
* Ejemplos: C, Pascal,...

### Interpretes

* La traducción y ejecución de código fuente a código máquina se hace línea por línea.
* Los errores de sintaxis aparecen cuando se interpreta la instrucción con error.
* Necesitamos el código fuente para ejecutar el programa.
* Los lenguajes interpretados suelen ser más lentos en su ejecución
* Ejemplos: Python, PHP, ...

### Máquina virtual

* La traducción se hace en dos pasos.
* Primero se compila el código fuente a un código intermedio (bytecode).
* Segundo, este bytecode se interpreta y ejecuta por una "máquina virtual".
* El bytecode es multiplataforma.
* Necesito una "máquina virtual" para cada plataforma.
* No necesito el código fuente.
* Ejemplo: Java, C#, ...
