# Problema D

## Enunciado del Problema 

Se te dan dos enteros positivos $N$ y $Q$, y una cadena $S$ de longitud $N$ que esta compuesto de caracteres del alfabeto ingles.

Debes procesar $Q$ consultas, cada consulta es del siguiente de los dos tipos: 

- `1 x` — Realiza la siguiente operación $x$ veces seguidas: borra el ultimo caracter de $S$ y lo coloca al inicio.  
- `2 x` — Imprime el carácter en la posición $x$. 

## Límites
- $2 \leq N \leq 5 \times 10^5$
- $1 \leq Q \leq 5 \times 10^5$
- $1 \leq x \leq N$
- $|S| = N$
- $S$ consiste solo de letras en minúscula del alfabeto inglés.
- Existe al menos una consulta de la forma `2 x`
- $N, Q, x$ son enteros

## Entrada
La primera linea de entrada tiene a $N$ y $Q$. La segunda linae tiene la cadena $S$, luego siguen $Q$ lineas que representan las consultas.

## Salida
Por cada consulta de la forma $2 x$, imprime la respuesta en una linea.

## Ejemplo de Entrada 1
```
3 3
abc
2 2
1 1
2 2
```

## Ejemplo de Salida 1
```
b
a
```

En la primera cosulta $S$ es igual a `abc`, asi que el segundo caracter es `b` y este debe ser impreso. En la segunda consulta $S$ cambia a `cab`. En la 3ra consulta como $S$ es `cab` asi que el segundo caracter es `a` y este debe ser impreso.

## Ejemplo de Entrada 2
```
10 8
dsuccxulnl
2 4
2 7
1 2
2 7
1 1
1 2
1 3
2 5
```

## Ejemplo de Salida 2
```
c
u
c
u
```
