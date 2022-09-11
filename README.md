# PC1: Práctica Calificada
**course:** Programación II  
**unit:** 1 y 2  
**cmake project:** PROG2_PC1_SIMULACRO_v2021_2

## Indicaciones Específicas
- El tiempo límite para la evaluación es 100 minutos.
- Cada pregunta deberá ser respondida en un archivo fuente (`.cpp`) y un archivo cabecera (`.h`) con el número de la pregunta:
  - `p1.cpp, p1.h`
  - `p2.cpp, p2.h`
  - `p3.cpp, p3.h`
- Deberás subir estos archivos directamente a [www.gradescope.com](https://www.gradescope.com) o se puede crear un `.zip` que contenga todos ellos y subirlo.

## Competencias
- Para los alumnos de la carrera de Ciencia de la Computación
    - Aplica conocimientos de computación apropiados para la solución de problemas definidos y sus requerimientos en la disciplina del programa.(nivel 2)
    - Diseña, implementa y evalúa soluciones a problemas complejos de computación.(nivel 2)
    - Crea, selecciona, adapta y aplica técnicas, recursos y herramientas modernas para la práctica de la computación y comprende sus limitaciones.(nivel 2)

- Para los alumnos de las carreras de Ingeniería
    - Capacidad para aplicar conocimientos de matemática.(nivel 2)
    - Capacidad para diseñar un sistema, un componente o un proceso para satisfacer las necesidades deseadas dentro de restricciones realistas(nivel 2)

### Pregunta #1 - Estructuras de control - Contar paginas (7 points)
  
Escribir un programa que recepcione una cantidad `n` y que verifique si ese número coincide con la suma de los números de las primeras páginas de un libro. En caso coincida debera devolver el número de páginas, si no devolverá la frase `"no coincide"`.

Ejemplo:
```markdown
Si n = 20 la respuesta es "no coincide" debido a que el mas cercano es 21
1 + 2 + 3 + 4 + 5 + 6 = 21

Si n = 30 la respuesta es "no coincide" debido a que el mas cercano es 36
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36

Si n = 10 la respuesta es 4
1 + 2 + 3 + 4 = 10
```

#### Input Format
```cpp
20
```

#### Constraints
```cpp
- El ingreso de los valores no requiere utilizar etiquetas (std::cout)
```

#### Output Format
```cpp
no coincide
```
#### Ejemplo 1
**Input**
```cpp
30
```
**Output**
```cpp
no coincide
```

#### Ejemplo 2
**Input**
```cpp
10
```
**Output**
```cpp
4
```

### Pregunta #2 - Acido Ribonucleico  - Función/Arreglos (6 points)
  
Escribir la función `complemento_invertido` que busque el complemento invertido de un filamento de ácido ribonucleico (ARN). El ácido ribonucleico es representado por una cadena que contiene solo 4 caracteres: A, C, G y U. En una fibra solo se puede permitir un par de esos caracteres A/U o G/C.  

Por ejemplo: 
```markdown
- A A A A --> U U U U 
- U U U U --> A A A A
- G G G G --> C C C C
- C C C C --> G G G G
```
La función debe ser declarada de la siguiente forma:
```cpp
void complemento_invertido(char* filamento, char* invertido, int sz);
```
Donde:  
- **_filamento_**: es un arreglo de tamaño **_sz_** que almacena el filamento original.  
- **_invertido_**: es un arreglo de tamaño **_sz_** donde se retornara el filamento complementario.
- **_sz_**: refleja el tamaño de ambos arreglos.
#### Input Format
```cpp
U A A G G G
```

#### Constraints
```cpp
- El ingreso de los valores no requiere utilizar etiquetas (std::cout)
```

#### Output Format
```cpp
C C C U U A
```
#### Ejemplo 1
**Input**
```cpp
A C G G U G G G U U U U A C
```
**Output**
```cpp
G U A A A A C C C A C C U G
```

#### Ejemplo 2
**Input**
```cpp
A A A A A A C C C C C G A C U A A A A U U U U U U U
```
**Output**
```cpp
A A A A A A A U U U U A G U C G G G G G U U U U U U
```

### Pregunta #3 - Distancia Terrestre (7 points)

La superficie de la Tierra es curva y la distancia entre 2 longitudes varía con la latitud, por lo que encontrar la distancia entre 2 puntos es más complicado que simplemente usar el teorema de Pitágoras.

![img.png](tools/img/img.png)

Dados ![img_2.png](tools/img/img_2.png) que son la latitud y longitud de 2 puntos en la Tierra. La distancia entre ambos puntos en kilómetros se calcula.
![img_3.png](tools/img/img_3.png)
donde:  
`6371.01` es el radio de la tierra en kilómetros.

Escribir la función `calcular_distancia` que solicite la latitud y longitud de 2 puntos en la tierra y que muestre la distancia entre los puntos.

**NOTA:** La latitud y longitud están expresadas en grados sexagesimales (360) y deberán ser convertidos en radianes al momento de usar las funciones trigonométricas.

La cabecera de la función debe ser:
```cpp
double calcular_distancia(double t1, double g1, double t2, double g2);
// donde:
// t1, g1 son la latitud y longitud de un primer punto en la tierra
// t2, g2 son la latitud y longitud de un primer punto en la tierra
```
#### Input Format
```cpp
-12.0464     // Lima
-77.0428
-5.1783      // Piura
-80.6549
```

#### Constraints
```cpp
- El ingreso de los valores no requiere utilizar etiquetas (std::cout)
```
#### Output Format
```cpp
860.66
```
#### Ejemplo 1
**Input**
```cpp
-5.1783
-80.6549
-18.0203
-70.3321
```
**Output**
```cpp
1815.84
```


