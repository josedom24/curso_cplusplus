# Herencia y delegación

## Herencia

La herencia es un mecanismo de la programación orientada a objetos que sirve para crear clases nuevas a partir de clases preexistentes. Se toman (heredan) atributos y métodos de las clases bases y se los modifica para modelar una nueva situación.
La clase desde la que se hereda se llama **clase base** y la que se construye a partir de ella es una **clase derivada**.

En C++ hay distintos tipos de herencia. en este curso vamos a ver un ejemplo de una **herencia simple** donde creamos una clase derivada a partir de una clase base. Otro tipo que no estudiaremos es la **herencia múltiple** donde se crea una clase derivada a partir de varias clases bases.

## Derivar clases

La sintaxis para realizar una herencia simple sería:

    class <clase_derivada>:[public|private] <clase_base> 
    {
        ...
    }




https://www.codingame.com/playgrounds/50747/herencia-en-c-practica-3/concepto-de-herencia
http://c.conclase.net/curso/?cap=036#038_clases
https://es.wikibooks.org/wiki/Programaci%C3%B3n_en_C%2B%2B/Herencia#INTRODUCIENDO_LA_HERENCIA.



Si nuestra clase base es la clase `Punto` estudiada en unidades anteriores, puedo crear una nueva clase de la siguiente manera:

