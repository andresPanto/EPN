##Que es el calculo secuencial.
* Funcionean en un ordenador con una sola CPU
* El prblema es dividido en instrucciones
* Las instrucciones se ejecutan secuencialemnte
*Una instruccion se ejecuta a la vez

##Que es el calculo paralelo.
* Se usa un ordenador con varias CPU
* El problema es dividido en partes independientes
* Cada parte independeiente es dividido en un conjunto de instrucciones
* Estas instrucciones son ejecutadas secuencialmente
* Las partes son resueltas de manera simultanea

## Por qué hacer calculo en paralelo
* Resolucion en menos tiempo
* Resolucion de problemasd mas grndes y complejos
* Realizar barridos paramétricos
* Estudio de variacion de un mismo problema
* Los porcesadores actuales son paralelos, n-core

Ecolución de los ordenadores más rápidos del mundo 

## La arquitectura de Von Neumman
* La memoria almacena prohramas y daris
* El programa son de intrucciones a seguir por CPU
* 

## Taxonimía de Flynn
Es la calsificación más extendida del paraleklismo
* Distinguen entre intrucciones y datos
* Estos pueden ser simples o multiples
## Simple Instruction Simple Data
La CPU procesa unicamente una instruccion en cada ciclo de reloj

Unicamente un dato es porcesdo por cada reloj

Más o menos como una imprenta, se procesa el papel (datos), la máquina imprime sobre el papel (CPU), El acto de impromir son las instrucciones del programa.

## SIMD
Todas las unidades ejecuran la misma instruccion.

Cada unidad procesa un dato distinto.

Todas las unidades procesan simultaneamente

### MAneras de obtener SIMD
* **MAtrices de procesadores**: Se puentea para que las instruccines que llegan a cada cpu sean las mismas.
* **Procesadores vecoriales***: El ingreso de los datos es mucho mas grande.

Ejemplo. MAtriz de imprenta. A más imprentas simultaneas, más trabajos se realizan

## MISD
* Casa unidad ejecuta una instruccion distinta.
* Cada unidad proces el mismo dato
* Aplicacion muy llimitada en la vida real.

## MIMD
* Cada unidad ejecuta una instruccion distinta
* Cada unida prcesa un dato distinto

Ej. Simulador de vuelo.

## CLasificacion de los ordenadores en paralelo
### Según la distribución de memoria

## Memoria Compartida
* Todas las CPU acceden a la misma memoria. (Por HW existe un bus que permite la conexion entre cpu y memoria)
* Cambios en la memoria son visibles para todas las CPU
* Arquitecturas Principales: UMA y NUMA

# UMA Acceso a memoria uniforme (Uniform Memory Access)
* Todas las CPU están igual de lejos de la memoria. (Según la capacidad de acceder a la memoria)
* Máquinas SMP (Symetric Multiprocesor). LAs cpu compiten en igualdad de condiciones por la memoria
* ej. Intel XEON

# NUMA Acceso a memoria no uniforme (Non - Uniform Memory Access)
* Las  CPU no estan a la msima distancia de la memoria
* Los modulos de memoria se adhieren a los procesadores. (Esta memoria va a un procesador, otra memorria a otro cpu - **memorias locales**)
* Es memoria compartida porque cada procesador puede acceder a la memoria de otro porcesador. Los accesos remotos tardan más por la **red de interconexion** que existe
* El acceso a datos de otra memoria es más lento
* EJ. AMD Opteron
* Otro ejemplo. Supercomputador IBM SystemP%: 64 CPU y 2000 GB de memoria

### Ventajas de memoria compartida
* Fáciles de programar
* Es fácil compartir datos entre threads

### Desventajas de memoria compartida
* La esclabialidada entre CPU y memoria es mala
* El progrmador es responsable de la sincronia
* Es costoso hacer ordenadores con muchos cpu

## Memoria Distribuida 
* Cada CPU tiene su propia memoria
* La memoria local de una CPU no es visible por otras CPU
* La informacion es comprtida entre CPU por una red o un socket o una aplicacion

### Ejemplo
**Cluster** 
* Se compone de equipos informaticos estandar
* Red de bajo o alto rendimiento (LA red es el cuello de botella)
* Costo bajo por la potencia que se consigue

### Ventajas
* La escalbilidad entre CPU y memoria es buena
* Aceso rápido y exclusivo a mi memoria
* El costo es lineal con el número de CPU

### Desventajas
* El programador es responsable de las comunicaciones
* La conversion de programas seriales es no trivial
* La red es el cuello de botella

## Ordenadores Hibridos
### Caracteristicas
* Grupos de CPU comparten la misma memoria
* Los grupos de CPU se comunican por la red
* Son máquinas SMP conectadas entre sí

### ejemplo
NEC Earth Simulator (Japón)
* 640 nodos SMP con 8 CPU por nodo
* 16 GB de memoria por nodo

Total: 5120 CPU y 10240 GB de memoria

Mare Nostrom (España)
* 5120 nodos y 2 CPU por nodo
* 4GBpor nodo

Total 10240 CPU y 20480 GB de memoria

### Ventajas
* LA escalabilidad entre C{u y mermoria son razonables
* El costo es lineal
* La red es menos crítica

### Desventajas
*   El programador es responsable de la comunicacnio y de la sincrionia (Las conexiones internas son fibra óptica)
* La conversion del programa trivial pued no ser trivial

