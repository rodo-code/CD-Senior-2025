# Problema B

## Enunciado del Problema 

Hay $N$ arboles en el bosque, el $i$-esimo arbol tiene $A_i$ nueces.

Alvin la ardilla recauda nueces de la siguiente manera:
- De los árboles que tienen 10 o menos nueces, él no toma nueces.
- De los árboles que tienen más de 10 nueces, él toma todas las nueces, menos 10.

Encuentra el número total de nueces que toma Alvin de todos los árboles.

## Límites
- $1 \leq N \leq 1000$
- $1 \leq A_i \leq 1000$
- Todos los valores de entrada son enteros.

## Entrada
La entrada esta dada desde una Entrada Estándar en el siguiente formato:
```
N
$A_i$ $...$ $A_N$
```

## Salida
Imprime la respuesta.

## Ejemplo de Entrada 1
```
3
6 17 28
```

## Ejemplo de Salida 1
```
25
```

## Ejemplo de Entrada 2
```
4
8 9 10 11
```

## Ejemplo de Salida 2
```
1
```