## Tipos de sistemas informaticos

* Sistemas simples
* Sistemas distribuidos:
Son los que tienen un medio de comunicacion y puenden transmitir informacion. Se clasisfican principalmente por su organización (Desde el más centralizado hasta el más descentralizado):
Centralizado: Solo un elemento cordina el trabajo del resto de elementos (maestro-esclabo). 
    * CLuster: De mil a 10mil elementos
    * Cliente servidor: Es menos rigido porque hay menos elementos conectados. (Yo recibo las ordenes de un tercero)
    * Cloud:  Hay algunos clientes servidores. 
    * Grid:
    * P2P: A pesar de que no recivo ordenes, igual hay trabajo oclaborativo. Ej: torrent
    
 **Sistema Distribuido:** Sistenma compuesto por recursos de computacion (no solo pcs, sino cualquier elemento que trasmite información) 
 fisicamente distribuidos, concetados a través de una red (no solo por TCO/IP, también bluethoot y otros protocolos)
 que se comunican y coordinan entre sí. Esto hace que el usuario lo dectecte como un solo sistema simple.
 
 **Computacion distribuida:** La computación que se hace en un sistema distribuido.
 Diferentes procesos se coordinan para oafrecer un servicio.
 
 
## **Caracteristicas del sistema distribuido:**
 Tambien se considera como un conjunto de procesadores unidos a una red
 * **Sin memorio compartida.** (En mi pc, varios procesadores utilizan la misma memoria --Memoria compartida En un distribuido, cada nodo puede tener su memoria -- sin memoria compartida)
 * **No existe un reloj común.** La computación distribuida no depende de la acordinación de los relojes. Los tiempos de reloj de los nodos no suelen estar conectadas.
 * **Dispositios de E/S asociados a cada procesador:**
 * **Los fallos deben ser independientes del sistema distrbuido** Los sistemas distribuidos deben soportar la caida de un nodo. (Un cluster debería tener un sistema de redundancia, llamado backup)
 * **Caracter heterogeneo**: Las máquuinas pueden ser diferentes. Cualquier elemento de cuaalquier fabricante con cualquier software se puede ejecutar.
 
 ## Ventajas
 * **Economia** Buen relacion rendimiento costo
 * **Alto rendimiento** Por el procesamiento en paralelo.
 * **Soporte de aplicaciones inherentes distribuidas** Las empresas son distribuidas geograaficamene.
 * **Capacidad de crecimiento**: La escalabilidad se hace más fácil. Si quiero más recursos solo contrato servicios en la nube.
 * **Fiabilidad y disponibilidad**: 
 * **Compartir recursos**
 
 
 
 NOTA: El AB de la fibra optica es infinito, lo que limita es la conversion optica-electrica en los dispositivos
 
 
 
 ## Qué ha facilitado el avance de la computación distribuida.
 * El avance de los procesadores.
 * Arquitecturas multicore. 
 * Mejoras en las memorias y tecnologías de almacenamieto. 
 * Mejoras en tecnolog;ia de red
 * [Ley de Gilder](https://es.wikipedia.org/wiki/Ley_de_Gilder)
 * Virtualizacion: Uso del hipervisor sobre el hardware para tener dierentes SO. 
 
 
 
 NOTAS: Velocidad de trnasmision de PSI: Antes Mbps, ahora Gbps
 
 No aparecen dispositivos con tantos procesadores (20, 30) es dificil por la coordinación de los procesadores.
 
 FPGA: Se pueden programar (en VHDL) las configureaciones electricas del dispositivo y se puede programar el hardware.
 
  ## Desventajas de sistemas distribuidos
  * **Problemas de red de interconexión**: Los sitemas son muy dependientes de la red. Esto origina:
    * Perdida de mensajes y saturacion.
    * Latencia puede provocar que al recibir un dato ya esté obsoleto.
    * La red es un elemento crítico.
    * NOTA: La forma correcta de diagnosticar la red en un sistema es ir desde abajo hacia arriba en el modelo OSI (conexion de red, tener IP, hacer ping, firewalls activados)
  *  **Seguridad y confidencialidad**: 
  * **Prblemas de actualizacion o instalacion de nuevo software:** Hay dispositovos que no deben estar conectados siempre y asi no se pueden hacer actualizaaciones
  
  **Un sistema distribuido es aquel en el que no puedes trabar en tu máquina por el fallo de otra máquina que ni siquiera sabia que existia**
  
  ## Mentiras de los sistemas distribuidos
  * **La red es fiable**
  * **La latencia del sistema es cero** El sistema se puede demorar.
  * **Ancho de banda infinito**
  * **La red es segura**
  * **La topologia de la red no cambia** en algunos casos cambia constantemente
  * **Existe un solo administrador** Solo en ciertos casos
  * **El costo de transporte es cero** Transportar info es costoso (satelites)
  * **La red es homogenea**
  
  ## Aplicaciones de los sistemas distribuidos
  * Entornos empresariales: redes corporativas en intranets
  * Entornoes de computacion de altas prestaciones
  * Sevicios de alta disonibilidad
  * Sistemas de gestion de bases de datos
  * Aplicaciones mutimedia
  * Sistemas industruales y aplicaciones de control
  * Otros, ver diapos
  
  ## Modelos de compuacion distribuida.
  Cluster, utility, grid, volume entre otras
  
  Las definiciones no son excluyentes y es complicado llegar a un acuerdo gener
  ### Cluster
  Un unico elemento jefe que brinda los resultados y brinda la inforamcion al resto par que la procese.
  
  **DEF**  SD dedicado a ejecutar una aplicacion buscando alras presaciones y/o lata disponibilidad, puede servir varias aplicaciones mediante peticion
  
  Es una alternativa a las supercomputadoras por calidad y precio.
  
  Caracteristicas usuales: 
  * Mas fuertemente acopladas  que SD general
  * Poca dispersion goegrafica
  / Redes de alta velocidad
  / Sistemas  hmogeneos
  * Caracter estático
  * Uso habitual de componenetes de hw standar
  
  Aspectos relevantes:
  Ver diapos
  
  ### Utility Computing
  Basicamente es un alquiler de sericios de computacion externos.
  
  Hay una demanda puntual basada en necesidades puntuales (On demand computing)
  
  Define un modelo más que una plataforma.
  
  No es una idea nueva (1961)
  
  Uso habitual de virtualizacion
  
  Problema de la tarifacion
  
  ### Grid computing
  Es una extension de cluster computing a mayor escala
  Revisar Diapos
  
  ### Volunteer computing
  Uno, voluntariamente sede sus recursos para un fin mayor.
  
  ### Cloud Computing
  Recursos de HW o SW ofrecidos comso un servicio.
  
  Modos de uso:
  * Infraestructure as a service. Amazon elastic computer clouds
  * Platform as a service. Google app engine
  * Software as a servico Google apps
  
Hay un debate de aspectos sociales. Debo tener los datos siempre conmigo?

## Autonomic Computing
Son sistemas complejos que necesitan de autogestion.

Si una persona hace una mala configuracion del sistema, es muy dificil solucionar todo.

Lo que se busca es un bucle de control

### Computacion movil.

Positivo. La comunicacion se da en cualquer lugar, Se pueden hacer varias cosas al mismo tiempo. La toptlogía de la red siempre cambia.

Negativo: Capacidad de procesamiento limitado sobre todo por la energía. Los móviles no tienen siempre conexion a internet

Aspectos: 
*Limitaciones en recuros
* AB variable
* Se debe controlar el consumo de energía
* Mayor amenaza de seguridad y privacidad
   
### Ubiquitous Computing
Cada vez hay conexion en más lugares

Computadores omniprescentes en muchos dispositivos

Muchos de ellos no actúan con el usuario.

Aspectos:
* Sistema dianamico. Componenetes (des)aparecen y se mueven.
* Spontaneous netwoerking
* Cada vez es más dificil localizar dispositivos
* Wearable computing
* Context-aware computing

Ejemplos: 
Imprmir fotos al llegar a un hotel
Visita guiada a un museo.

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  