# Proyecto_A01709113
Diego Ernesto Sandoval Vargas
A01709113

# Contexto

Una tienda de musica busca una forma de administracion de productos y sus ganacias generales, por lo que nos pide crear un programa que permita administrarla facilmente, haciendo usos de clases para poder organizar,editar y establecer los diferentes productos que se tienen a la venta, ademas de poder revisar la cantidad de unidades y las ventas que ha tenido ese producto en especifico.
Por hot sale la tienda ha dado cupones de distinto valor a distintos usuarios, los cupones para paquetes de instrumentos, pueden llegar a tener un maximo de 20% de descuento sobre el precio total del paquete.

# Funcionalidad

El programa permite:

-Crear 3 tipos de objetos (Guitarra, piano y violin), ver sus caracteristicas (marca,modelo,precio, etc) y la cantidad de producto que se tiene (unidades/stock) y las ventas, para finalmente recibir el porcentaje de ventas de ese producto, junto a eso tambien es posible agrupar N cantidad de objetos de los 3 tipos (Guitarras, Pianos y Violines) en arrays para crear un "paquete", al cual se puede ver las caracteristicas de los instrumentos que lo conforman, y su precio, ademas de el precio final y el ahorro que tuvo el usuario del paquete este cuenta con un cupon

# Consideraciones

El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos
compilar con: "g++ guitarra.h piano.h violin.h main.cpp"
correr en windows: "a.exe"

En el programa vienen 3 ejemplos para cada tipo de objeto (Guitarras, Pianos y Violines), y estos vienen asignados mediante agregacion al paquete (array)



# Correcciones

Se han realizado las siguientes correcciones:

1)Se han actualizado y ordenado los atributos y metodos de todas las clases, para tener una idea mas clara de como sera cuando se implemente la herencia 

2)Se implemento Herencia usando la clase "Padre" Instrumento, las variables marca y modelo han pasado a ser de tipo publico, se agrego una funcion "to_string" en Guitarra que permite ver sus caracteristicas, mediante la agregacion se creo una clase llamada "Paquete_Guitarras" donde se pueden agrupar 3 objetos tipo guitarras diferentes, ver sus caracteristicas y aplicar la promocion de descuento (es decir hay una funcion que suma los precios de las 3 guitarras y regresa el precio final con descuento), se agregaron casos de prueba para observar el funcionamiento

3)Se cambio el tipo de variable de Precio:final a string para permitir devolver una string que diga el precio sin y con descuento y la cantidad que el cliente ahorro, se agregaron metodos mostrar para permitir ver las caracteristicas de los objetos piano,guitarra y violin, se utilizo este metodo en el main para limpiar el exceso de codigo.

4)Se creo un menu, ahora el paquete podra contener objetos de los 3 tipos presentes en el programa, se agregaron los metodos para el manejo de los paquetes de violines y pianos (asignar,mostrar y el precio final), se agrego al metodo mostrar (objeto individual) el porcentaje de ventas del producto, al metodo de porcentaje de ventas se le agrego un nuevo string que devuelve cuando el objeto no tiene ventas.

5)Se actualizaron los metodos usados para mostrar caracteristicas del objeto (mostrar_car) utilizando sobreescritura, se actualizaron los metodos asigna y precio implementando en estos sobrecarga.

6)Se actualizo el paquete, para que dejaran de ser 3 paquetes separados (1 por cada instrumento) y se volvio un paquete que puede almacenar cualquier clase hija de instrumento, el arreglo de instrumentos paquete paso a ser uns arreglo de apuntadores, se actualizo la funcion mostrar caracteristicas y las fuinciones para mostrar el precio del paquete, para que estas mediante polimorfismo funcionaran, los ejemplos pasaron a ser apuntadores que se crean en el tiempo de ejecucion del programa
