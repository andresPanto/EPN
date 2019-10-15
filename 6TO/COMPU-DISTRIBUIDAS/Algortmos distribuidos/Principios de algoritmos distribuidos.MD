## Por qué es dificil la cordinacion en sistemas distribuidos
* El emiso no puede saber
    * Si el mensaje fue recibido
    * Si el receptor falló entes o despues de procesar el mensaje
    
    ##Problemas típicos 
 * Sincronizacion de relojes
  *  Exclusion mutua
  * Eleccion de lider
  * Concenso distribuido
  * Comunicacion en grupos
  * Gestion de replicas
  * Estados Globales - Que todos estemos de acuerdo en lo mismo
  
## Que son
Algoritmos que trbajan en sistemas distribuidos

Realizan:
* Comunicacnion
* Gestion de datos y de recursos
* Sincronizacion
* Consenso

**Dben trabajar Bajo**
 * Actividades concurrentes en multiples localizaciones
 * Incertiumbre de tiempo y ordenacion de eventos
 * Posibilidad de fallos.
 
 ---
 **Recordar el teorema de CAP**
 ---
 ###Modelo Sincrono
 * Relojes sincronizados
 * Entega de mensajes acotada
 * Tiempo de ejecucion de procesos acotado
 
 Existe una señal de reloj que se comparte entre nodos. La señal de reloj debe ser más rápidaque los procesadores. Generar la señal es muy caro
 
 ### Modelo Asíncrono
 * No hay sincronizacion de relojes
 * Entrega de mensajes no acotada
 * El tiempo de ejecucion de procesos es arbitraria
 
 ### Sistemas parcialmente sincronos
 
 ## Tipos de paso de mansajes
 ### Sincriono
 Solo cuando el mensaje se recibe, se ejecuta el programa
 
 ### Asincrono
 No esperas la llegada para continuar
 
 ## Modelamiento del sistema distribuido
 
 Cada procesador (P) ejecutan sus algoritmos de manera local
 
 Se comunican mediante cnales de comunicacion
 
 * Cada evento (E) se da en un procesador (P)
 
 * Tipos de eventos locales
    * Internos
    * Comunicacion
    
Tenemos varios eventos dentro de un proceso

Secuencialmente los eventos se ejecutan uno después de otro de manera lineal

En paralelo, los eventos de varios procesos interactúan entre sí

## Algoritmos locales
* Algoritmo local
    * Un proceso cambia de un estado a otro (evento interno)
    * Un proceso cambia de estado y envia un mensaje (evento de envio)
    * Un proceso recibe un mensaje y cambia su estado (evento de recepcion)
* Restricciones
    * Un proceso (p) solo puede recibir un mensaje despues de haber sido enviado por otro
    * Un proceso (p) puede cambiar de estado c a d solo si esta en c    
    
Un sistema distribuido se puede modelar como (C,-,I) 
* C (conjunto de estados)
* --> Posibles transiciones (--> Subconjuneto de CxC)
- I son los estados iniciales (I subconjunto de C)

El estado de un sistema distribuido, C, se pueden describir como:
* La configuracion actual de cada proceso
* Los mensajes de tránsito por la red

## Modelo sistema distribuido
Al haber un nuevo procesador, los estados se denominan **configuraciones** y las trancisiones se conocen como **transiciones de configuración**

Una **ejecucion** es una secuencia de configuraciones donde
 * Hay una configuracion inicial.
 * Hay una transicion entre di -> di+1 para todo i >=1
 * La secuencia puede ser finita o infinita (circular)
 
 Una ejecucion o secuencia de estados define el comportamiento del sistema.
 
 ##Propiedades
 ### Orden causal <=H ->
 Independientemente de la resolucion del reloj usado, e <=H f significa que e sucedio antes que f
 
 e tiene un orden causal del evento f y e sucedió antes de f.
 
 Orden causal se define como:
 * Si e ocurre antes que f entonces e <=H f (e es causal de f)
 *  Si s es un evento de envío y r su evento de recepción entonces s <=H r
 * <=H Es transitiva. 
    * Si a es causal de b y b es causal de e entonces a es causal de e
 * <=H es reflexiva
    * a es causal de a para cualquier evento.
  ### Concurrencia ||
  a y b son concurrentes si a no es causal de b y b no es causal de a.
 
 Dos eventos concurrentes se puden ejecutar de manera simultanea en cualquier momento.
 
 Toda relacion de causalidad establece un nexo entre dos sucesos.
 
 Para ordenar los eventos de un mismo proceso basta asociar a cada evento un cronometro local T(x).
 
 Hay una relación de causalidad (x->y, x ha sucedido antes que y) si:
 1. x e y son eventos del mismo proceso y t(x)<t(y)
 2.  Hay otros dos que hay que ver en las diapositivas
 
  ### Ejecuciones equivalentes ~
  Dos ejecuciones distribuidas F y E F ~ Ẽ si:
  * Tienen el mismo conjunto de eventos
  * Mantienen el mismo orden causal.
  
  ### Ordenacion de eventoss
  En la monitoriazacion del comportamiento de una aplicacion distribuida existe un **observador**
  Esta monitorización funciona cuando hay un medio de comunicaion ideal.
  
  La solución es teórica pero no correcta.
  
  Para ordenar los eventos se debe asignar una **marca de tiempo a los eventos de recepcion** por parte del observador y ordenar los tiempos.
  
  Una vez más, esto es incorrecto pues no se puede asumir tiempo de la recepcion porque se pueden dar problemas en la red
  
  Otra forma es poner una marca de tiempo en el mensajede los eventos, pero esto exije que los relojes estén sincroniados, cosa que no se puede asumir.
  
  La correcta solución es una que no implica el uso de relojes.
  
  ## Tiempo y estado global del sistema
  