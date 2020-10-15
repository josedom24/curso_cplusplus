# Tipo de datos booleano. Operadores relacionales y lógicos

El tipo booleano o lógico `bool` puede tener dos estados expresados por las constantes predefinidas `true` (lo que lo convierte en el entero 1) y `false` (lo que lo convierte en el entero 0). Realmente cualquier valor entero distinto de 0 será verdadero, y el 0 será falso.

## Operadores de comparación

El valor devuelto por una operación de comparación es un valor lógico:

* `>`: Mayor que
* `<`: Menor que
* `==`: Igual que
* `<=`: Menor o igual
* `>=`: Mayor o igual
* `!=`: Distinto

## Operadores lógicos

El valor devuelto por una operación lógica es un valor lógico:

* `&&`: Conjunción, operación AND.
* `||`: Disyunción, operación OR.
* `!`: Negación, operación NOT.

**Tabla de verdad del operador Y**

| a  | b  | a && b  |
|---|---|--------------|
| V  | V  | V  |
| V  | F  | F  |
| F  | V  | F  |
| F  | F  | F  |

**Tabla de verdad del operador O**

| a  | b  | a \\|\\|  b    |
|---|---|--------------|
| V  | V  | V  |
| V  | F  | V  |
| F  | V  | V  |
| F  | F  | F  |

**Tabla de verdad del operador NO**

| a  | !a  |
|---|---|
| V  | F  |
| F  | V  |

## Comparación de cadenas de caracteres

Las cadenas se comparan carácter a carácter, en el momento en que dos caracteres no son iguales se compara alfabéticamente (es decir, se convierte a código ASCII y se comparan).

Ejemplos
    
* "a">"A" es verdadero.
* "informatica">"informacion" es verdadero.
* "abcde">"abcdef" es falso.