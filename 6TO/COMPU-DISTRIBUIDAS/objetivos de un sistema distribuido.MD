# Objetivos de un sistema distribuido

## Transparencia
El usuario no debe sabere que está en un sistema distribuido.
* Acceso: La manera de acceder a un recurso local es igual a aacceder a un recurso remoto
* Posicion: Se accede a recursos sin importar su ubicacion
* Migracion: Los recursos se mueven de un sitio a otro sin afectar  a los usuarios.
* Concurrencia: El acceso concurrente no afecta a los usuarios.
* Replicacion: La existencia de replicas no afecta a los usuarios
* Fallos: La ocurrencia de fallos no afecta a los usuarios
* Crecimiento: El crecimiento del sistema  no afecta a los usuarios
* Hetergeneidad: La heterogeneidad no debe afectar a los ususarios (Que se usen varias marcas)

No siempre se puede conseguir esto, No siemproe es exceelnete tener toda la trasparencia

## Rendimiento
El rendimeinto no debe ser peor que en un sistema centrakizado.

El rendimiento debe ser proporcional a los procesadores empleados

Factores:
* **Uso de esquemas de cache:** Intentar que muchos accesos se hagan localmente
* **Uso de esquemas de replicacion:** REparto de carga entre componentes replicados
* **En ambos casos:** Costo de mantener coherencia

## Crecimiento
Se debe evitar:
 * cuellos de botella
 * componentes centralizados
 * tablas centralizadas
 * algoritmos centralizados

Estrategias:
* Reparto de estructuras de datos entre varois nodos
* Replicacion y cache
* Raalizacion de parte del rpcesamiento en los nodos del cliente
 
Caracteristicas deseables de un algoritmo distribuido:
* Ninguna maquina tiene info completa del estado del sistema
* Las desiciones se basan en informacion local
....

## Caracter abierto
Facilita la interaccion, posibilita migración, flexibilidad y otros beneficios

## Fiabilidad
Un Sis Distribuido es inherente a fallos

Evitar componentes críticos

Uso de replicaciión activa y pasiva

Disponibilidad. Yo siempre puede acceder al dispositivo a pesar de fallos.

Atomicidad. Que la informacion este disponible y tenga coherencia a pesr de fallos

Concurrencia: Varias actividades se ejecutan simultaneamente.

La concurrencia introduce condiciones de carrera.

Los recursos compartidos deben protegerse y asegurar: entre otras coszas, exclusion mutua.

## Software de sistemas de los SD.

El software ara maquina no era valido para SD

Aparecen los SO de Red

Se dan cuenta de que se necesitan sistemas para varias cosas aparecen las arquitecturas de

### Sistemas Operativos distribuidos.
Una copia del SO en cada procesador.

Lo mejor fue hacer...
###Middleware
Sobre el sistema operativo actual se crea un framework para que los SO actuales rabajen de manera conjunta.

El SOD se ejecuta directamente sobre el hardware y es dificil coordinar todo, el midlleware por otro lado permite poner los SO sobre el hardware y los SO se comunicacn mediente el middelaware.

El middleware es más barato y mejor.

## Componentes de un sistema distribuido
* Servicios de comunicacion: Como se comunicacn las arquitecturas:
    * cliente/servidor (la orden la reciben todos) 
    * editor/subscriptor (Recibo la orden de los que estoy suscrito)
    * P2P
* Tecnologías de comunicación:
    * Paso de mensajes (sockets)
    * Llamada de procedimientos remotos
    * Invocación a métodos remotos
    * Tecnologías de objetos distribuidos
    * Servicios web
 * Servicios de nombre
 * Sistemas de ficeheros distribuidos. Los problemas son:
    * Estructura de ficheros
    * Resolucion de nombres
    * Acceso a datos
    * Gestion de cache
    * Gestion de cerrojos.
 * Gstion de procesos
    * Caracterizacion de la carga
    * Estrategias de asignaciosnde procesadoresa a procesos
    * Planificacion de procesos
    * Migracion de procesos
 * Memoria compartida distribuida: Memoria fisicamente provada pero logicamente compartida
    * Se implementa basado en paginas o en variables compartidas.
    * Aspectos de diseños
    
 * Sincronización y coordinación
 
 ## Paso de mensajes
 
 
 ## Teorema CAP Brewer, PODC 2000
 
 **Consistency**: La información en todos los nodos es la misma
 **Availability** Cada petición por parte de un nodo recibe una respuesta
 **Partition tolerance** El sistema funciona a pesar de que algún nodo falla
 
  **Teorema** No se pueden conseguir las tres cosas al 100% al mismo tiempo. 