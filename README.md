# 2019_1_d3_prc4_IbagueEdwin_LagunaJuan_SanchezCristian

## Resumen:

Mediante la práctica de laboratorio en cuestión, se busca reforzar los conocimientos adquiridos previamente en lenguaje C/C++ y consolidar los conocimientos en lenguaje Python con el fin de obtener la suficiente experticia para superar los retos propuestos por la asignatura. Consecuentemente, se planteó el diseño de una plataforma bancaria con el fin de realizar cualquier tipo de transacciones necesarias para una serie de bancos promedio, con una serie de restricciones con respecto al uso de los lenguajes, es decir, una implementación en la que se involucren los dos lenguajes de programación previamente nombrados.

_Palabras clave: Servidor, Interfaz Bancaria, Cliente, Cuenta, Depósito, Retiro, Transacción._

## Introducción

Interfaz es un término que procede del vocablo inglés interface. En informática, esta noción sirve para señalar a la conexión que se da entre dos o más dispositivos o sistemas. Asimismo, una interfaz bancaria es aquella que permite a un cliente comunicarse con su banco con el fin de hacer cualquier transacción que éste considere pertinente. La interfaz, en este caso, está compuesta por los puntos de contacto entre un usuario (cliente) y el Banco.


## Procedimiento
En primera instancia se decidió hacer la interfaz del funcionario en lenguaje python como se especificaba en lso requerimientos, por lo que se recurrió a abrir una ventana de qt con el uso del diseñador de qt, el cual se abre mediante el siguiente comando en el terminal:

```bash
$ designer
```
Posteriromente, se procedió a hacer el diseño de la ventana inicial, el que se verá en la interfaz bancaria y del cual se parte para hacer todos los procesos:

![Pantalla_Inicial](https://user-images.githubusercontent.com/47603242/56759934-b489e200-675f-11e9-9373-c81e77f8974e.png)

Como se puede ver, se parte de 9 botones presionables (pushbuttons) los cuales van a ser los que guien al funcionario a realizar cualquier tipo de transacción que sea necesaria, dándole las siguientes opciones:

* Consultar cuenta
* Consultar o Modificar Cliente
* Bloquear o Desbloquear Cuenta
* Crear Cuenta
* Crear Cliente
* Depositar o Retirar
* Consultar

Ya después de haber diseñado la pantalla inicial,se procede a realizar las primeras funciones de los botones, para lo cual se codifica un total de 4 arreglos en los cuales se van a guardar los datos de los clientes, además de que se determinan los primeros 4 clientes inscritos en el sistema del Banco, los cuales son:

* Juan Laguna
* Edwin Ibague
* Giovanny Sanchez
* Alexander Arboleda

y se codificó de la siguiente manera:

```bash
  cuentas = [123456, 234567, 345678]
	nombre = ["Juan", "Edwin", "Giovanny", "Alexander"]
	apellido = ["Laguna", "Ibague", "Sanchez", "Arboleda"]
	cedula = [10004567, 10005678, 10007892, 10002112]
	contraseña = ["0000", "0000", "0000", "0000"]
```

*De esta forma se desarrolló la Interfaz del Cliente, la cual se desarrolló en lenguaje C++*

--- ACÁ PONE SU PARTE IBAGUÉ ---

## Análisis de Resultados
## Conclusiones
