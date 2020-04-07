# Cadenas de caracteres con la clase string

En el apartado [Introducción a las cadenas de caracteres](curso/u11) estuvimos estudiando varios aspectos de las cadenas en c++ usando la clase `string`:

* Declaración de las cadenas de caracteres.
* Indexación de los carácteres.
* Concatenación de cadenas con el operador `+`.
* Algunos métodos de la clase string

Vamos a profundizar en el uso de algunos métodos de clase de `string`.

## Principales métodos de la calse string

Vamos a ver los ejemplos a partir de esta cadena:

    string cadena="informática";

* `clear()`: Borra todos los caracteres de una cadena. Ejemplo:

        cadena.clear();
        cout << cadena; //No muestra nada, la cadena está vacía

* `length()` o `size()`: Devuelve la cantidad de caracteres que tiene una cadena. Ejemplo:

        cout << "La cadena " << cadena << " tiene " << cadedena.length() << "caracteres."
    La salida sería:

        La cadena informática tiene 11 caracteres.

* `front()` y `back()`: Devuelve el primer carácter y el último de una cadena. Ejemplo:

        cout << "Primer carácter: " << cadena.front() << endl; //Igual que cadena[0]
        cout << "Último carácter: " << cadena.back() << endl; // Igual que cadena[[cadena.length() - 1]]

        La salida sería:
        Primer carácter: i
        Último carácter: a
