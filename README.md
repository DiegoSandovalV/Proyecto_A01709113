# Proyecto_A01709113
Diego Ernesto Sandoval Vargas
A01709113

# Contexto

Una tienda de musica busca una forma de administracion de productos y sus ganacias generales, por lo que nos pide crear un programa que permita administrarla facilmente, haciendo usos de clases para poder organizar,editar y establecer los diferentes productos que se tienen a la venta, ademas de poder revisar la cantidad de unidades y las ventas que ha tenido ese producto en especifico.
Junto a esto la Tienda tiene una promocion, donde por la compra de un paquete de 3 guitarras el cliente obtiene un 20% de descuento sobre el precio final (la suma de los precios de las 3 Guitarras)

# Funcionalidad

El programa permite:

-Crear 3 tipos de objetos (Guitarra, piano y violin), ver sus caracteristicas (marca,modelo,precio, etc) y la cantidad de producto que se tiene (unidades/stock) y las ventas, para finalmente recibir el porcentaje de ventas de ese producto, junto a eso tambien es posible agrupar 3 objetos tipo "Guitarra" para crear un "paquete" con promocion donde el precio final de las 3 guitarras tendra un descuento del 20%

# Consideraciones

El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos
compilar con: "g++ guitarra.h piano.h violin.h main.cpp"
correr en windows: "a.exe"

Al ser un avance del proyecto no esta en su total funcionalidad para el usuario.

# Correcciones

Se han realizado las siguientes correcciones:

1)Se han actualizado y ordenado los atributos y metodos de todas las clases, para tener una idea mas clara de como sera cuando se implemente la herencia 

2)Se implemento Herencia usando la clase "Padre" Instrumento, las variables marca y modelo han pasado a ser de tipo publico, se agrego una funcion "to_string" en Guitarra que permite ver sus caracteristicas, mediante la agregacion se creo una clase llamada "Paquete_Guitarras" donde se pueden agrupar 3 objetos tipo guitarras diferentes, ver sus caracteristicas y aplicar la promocion de 20% de descuento (es decir hay una funcion que suma los precios de las 3 guitarras y regresa el precio final con descuento), se agregaron casos de prueba para observar el funcionamiento
