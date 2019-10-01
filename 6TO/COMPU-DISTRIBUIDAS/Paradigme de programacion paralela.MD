Hay varias formas:
* PAso de mensjaes
* Memoria compartida
* Tares
* Paralelismo de datos
* Operaciones remotas de memoria
* Modelos commbinados

Todas estas formas **no son excluyetes y no tienen que ver con los ordenadores**

## Paso de mensajes
* Conjunto de procesos que tienen una memoria local
* Los procesos intercambian datos mediante mensajes
* El emisor y receptor de mensajes tienen que colaborar

El programador es responsable de la interacción de los mensajes.

Usualmente se usan librerias y entre ellas, la más famosa es la MPI 
#### Message Passing Interface 
La más extendida es la MPI2, escrita en C o C++

MPI es un protocolo de comunicacion así que esta implementado en todos los lenguajes.

## Modelo de Tareas
* Un porgrama serial define un conjunto de tareas
* cada tarea dispone de memoria locla
* Cada tarea tiene acceso a una memoria conjunta
* Las tareas son realizadas simultaneamente
* **El progrmador es responsable de la sincronización**

En algun momento debo unir los resultados de lasa tareas. Esto es muy bueno para tareas independientes entre si

Es casi imposible valancear las tareas para que duren lo mismo siempre

### OpenMP
Lo define el Open MPArchitecture REview Board

Igualmente implementado en todos los lenguajes pero sobresale C