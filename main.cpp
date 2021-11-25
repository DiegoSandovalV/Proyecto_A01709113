#include <iostream>
#include <string>
#include "guitarra.h"
#include "piano.h"
#include "violin.h"
#include "paquete_guitarras.h"

using namespace std;

int main() {

    //Prueba de crear objeto de la clase Guitarra

    Guitarra guitarra1("Fender","Stratocaster",55, "Metal","medium", 10, 1);

    //Se mandan a llamar los getters para demostrar su funcionamiento
    cout << "Guitarra 1: \n" << guitarra1.get_marca() << endl << guitarra1.get_modelo() << endl << guitarra1.get_precio()
         << endl << guitarra1.get_cuerdas() << endl << guitarra1.get_trastes()<<endl<<guitarra1.get_unidades() << endl << guitarra1.get_ventas()
         << endl<<guitarra1.porcentaje_ventas()<<endl<<endl;

    //Se mandan a llamar los setters para comprobar funcionamiento
    guitarra1.set_marca("Yamaha");
    guitarra1.set_modelo("Parlor");
    guitarra1.set_precio(99.4);
    guitarra1.set_cuerdas("Nylon");
    guitarra1.set_trastes("bajos");
    guitarra1.set_unidades(8);
    guitarra1.set_ventas(3);

    //Se vuelven a llamar los getters para revisar si las modificaciones se hicieron correctamente
    cout << "Guitarra 1: \n" << guitarra1.get_marca() << endl << guitarra1.get_modelo() << endl << guitarra1.get_precio()
         << endl << guitarra1.get_cuerdas() << endl << guitarra1.get_trastes()<<endl<<guitarra1.get_unidades() << endl << guitarra1.get_ventas()
         << endl<<guitarra1.porcentaje_ventas()<<endl<<endl;


    //Prueba de crear objeto de la clase Piano
    Piano piano1("Yamaha","Grand",99.4,"Sin sintetizador",88,13,2);

    //Se mandan a llamar los getters para demostrar su funcionamiento
    cout << "Piano 1: \n" << piano1.get_marca() << endl << piano1.get_modelo() << endl << piano1.get_precio()
         << endl <<piano1.get_sintetizador() << endl << piano1.get_num_teclas()<<endl<<piano1.get_unidades() << endl << piano1.get_ventas()
         << endl<<piano1.porcentaje_ventas()<<endl<<endl;

    //Se mandan a llamar los setters para comprobar funcionamiento
    piano1.set_marca("Broadwood");
    piano1.set_modelo("Cottage");
    piano1.set_precio(99.3);
    piano1.set_sintetizador("Modular");
    piano1.set_num_teclas(71);
    piano1.set_unidades(8);
    piano1.set_ventas(3);

    //Se vuelven a llamar los getters para revisar si las modificaciones se hicieron correctamente
    cout << "Piano 1: \n" << piano1.get_marca() << endl << piano1.get_modelo() << endl << piano1.get_precio()
         << endl <<piano1.get_sintetizador() << endl << piano1.get_num_teclas()<<endl<<piano1.get_unidades() << endl << piano1.get_ventas()
         << endl<<piano1.porcentaje_ventas()<<endl<<endl;

    //Prueba de crear objeto de la clase Piano
    Violin violin1("Yamaha","Artida",88,"Nylon","No incluido",8,8);

    //Se mandan a llamar los getters para demostrar su funcionamiento
    cout << "Violin 1: \n" << violin1.get_marca() << endl <<violin1.get_modelo() << endl << violin1.get_precio()
         << endl << violin1.get_cuerdas() << endl << violin1.get_barbada()<<endl<<violin1.get_unidades() << endl << guitarra1.get_ventas()
         << endl<<violin1.porcentaje_ventas()<<endl<<endl;


    //Se mandan a llamar los setters para comprobar funcionamiento
    violin1.set_marca("Yamaha");
    violin1.set_modelo("Braviol");
    violin1.set_precio(89);
    violin1.set_cuerdas("Metal");
    violin1.set_barbada("Plastico");
    violin1.set_unidades(5);
    violin1.set_ventas(7);

    //Se vuelven a llamar los getters para revisar si las modificaciones se hicieron correctamente
    cout << "Violin 1: \n" << violin1.get_marca() << endl <<violin1.get_modelo() << endl << violin1.get_precio()
        << endl << violin1.get_cuerdas() << endl << violin1.get_barbada()<<endl<<violin1.get_unidades() << endl << guitarra1.get_ventas()
        << endl<<violin1.porcentaje_ventas()<<endl<<endl;


    //Se crean otras 2 guitarras para el paquete con descuento
    Guitarra guitarra2("ibañex","a",99, "Metal","medium", 10, 1);
    Guitarra guitarra3("yamaha","acustica",88, "Metal","medium", 10, 1);

    //Se crea el paquete
    Paquete_Guitarras paquete1;

    //Se le asignan las guitarras al paquete
    paquete1.asigna_guitarra(guitarra1,0);
    paquete1.asigna_guitarra(guitarra2,1);
    paquete1.asigna_guitarra(guitarra3,2);

    //Se muestran sus caracteristicas y el precio del paquete
    cout<<"Paquete 1:"<<endl<<paquete1.mostrar_guitarras();
    cout<<"Precio con descuento: "<<paquete1.precio_total();

    return 0;

}
