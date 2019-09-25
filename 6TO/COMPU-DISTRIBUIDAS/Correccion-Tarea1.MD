## Cual es la diferencia entre protocolo de red y una interfaz de red.
**El protocolo** define el lenguaje en el cual van a hablar dos dispositivos para poder comunicarse. La comunicación es horizontal

**La interfaz** es la manera en que dos capas se comunican. La comunicacion es vertical.
## Cual es la diferencia entre conmutacion de paquetes y conmutacion de circuitos
**Paquetes**: La informacion se divide en paquetes y cada paquete busca la mejor forma de llegar a destino 
Nada asegura que la informacion llega en orden y los paquetes deben ser armados en el destino. Se pueden perder paquetes. 

**Cicuitos**:El camino (path) debe establecerse antes de comunicar. Todo el tráfico pasará por el camino
La informacion llega en orden. Es más rápido que los paquetes. Es mas caro

## Cual es la diferencia entre Simplex, duplex y full duplex.
**Simplex**: Comunicacion unidireccional

**Duplex**: Bidireccional pero no puede transmitir al mismo tiempo (En un momento transmite, en otro recive)

**Full Duplex**: Bidireccional y se puede transmitir al mismo tiempo.

## Diferencia entre ip privada e ip publica

**Privada**: Funcionan en las intranets
![](https://image.slidesharecdn.com/rangosips-131217093548-phpapp02/95/rangos-de-ips-pblicas-y-privadas-1-638.jpg?cb=1387273005)

**Publica**: Se pueden transmitir entre routers
![](https://image.slidesharecdn.com/rangosips-131217093548-phpapp02/95/rangos-de-ips-pblicas-y-privadas-2-638.jpg?cb=1387273005)

## TCP y UDP

**TCP**:Segmeto. Muchas similitudes con conmutacion de circuitos. Mide el flujo de datos para que no se pierdan segmentos y si es muy rapido cierra la ventana

**UDP**:Datagrama. Similitudes con conmutacion de paquetes

## NAT
La comunicacion en NAT es bidireccional.

En el router NAT se rescriben paquetes para cmabiar la dirección de privada a pública y viceversa.


![](https://i.ytimg.com/vi/tzzR76oDbhs/maxresdefault.jpg)
## DNS
Solo existe una relacion unívoca entre una URL y una IP.

La funcion de DNS se da por la estructura tipo arbol del protocolo

![](http://rauljesus.xyz/redes/dns/imgDNS/funcionamientoDNS.png)
