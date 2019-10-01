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