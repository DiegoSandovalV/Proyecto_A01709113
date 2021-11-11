#include <iostream>
#include <string>
#include "guitarra.h"
#include "piano.h"
#include "violin.h"

using namespace std;

int main() {

    //Prueba de crear objeto de la clase Guitarra
    Guitarra guitarra1("Electrica", "Fender", "Stratocaster", "Metal", 10, 1);

    //Se mandan a llamar los getters para demostrar su funcionamiento
    cout << "Guitarra 1: \n" << guitarra1.get_tipo() << endl << guitarra1.get_modelo() << endl << guitarra1.get_marca()
         << endl << guitarra1.get_cuerdas() << endl << guitarra1.get_unidades() << endl << guitarra1.get_ventas()
         << endl<<guitarra1.porcentaje_ventas()<<endl;

    //Se mandan a llamar los setters para comprobar funcionamiento
    guitarra1.set_tipo("Acustica");
    guitarra1.set_marca("Gibson");
    guitarra1.set_modelo("Ibañez");
    guitarra1.set_cuerdas("Nylon");
    guitarra1.set_unidades(8);
    guitarra1.set_ventas(3);
    //Se vuelven a llamar los getters para revisar si las modificaciones se hicieron correctamente
    cout << "\nGuitarra 1: \n" << guitarra1.get_tipo() << endl << guitarra1.get_modelo() << endl << guitarra1.get_marca()
         << endl << guitarra1.get_cuerdas() << endl << guitarra1.get_unidades() << endl << guitarra1.get_ventas()
         << endl<<guitarra1.porcentaje_ventas()<<endl;


    //Prueba de crear objeto de la clase Piano
    Piano piano1("Digital","Yamaha","Modular",15,2);

    //Se mandan a llamar los getters para demostrar su funcionamiento
    cout << "\nPiano 1: \n" << piano1.get_sonido() <<endl << piano1.get_marca()
         << endl << piano1.get_sintetizador() << endl << piano1.get_unidades() << endl << piano1.get_ventas()
         << endl<<piano1.porcentaje_ventas()<<endl;

    //Se mandan a llamar los setters para comprobar funcionamiento
    piano1.set_sonido("Acustico");
    piano1.set_marca("Nux");
    piano1.set_sintetizador("No tiene");
    piano1.set_unidades(9);
    piano1.set_ventas(9);

    //Se vuelven a llamar los getters para revisar si las modificaciones se hicieron correctamente
    cout << "\nPiano 1: \n" << piano1.get_sonido() <<endl << piano1.get_marca()
         << endl << piano1.get_sintetizador() << endl << piano1.get_unidades() << endl << piano1.get_ventas()
         << endl<<piano1.porcentaje_ventas()<<endl;

    //Prueba de crear objeto de la clase Piano
    Violin violin1("roble","yamaha","nylon",10,2);

    //Se mandan a llamar los getters para demostrar su funcionamiento
    cout << "\nViolin 1: \n" << violin1.get_madera() <<endl << violin1.get_marca()
         << endl << violin1.get_cuerdas() << endl << violin1.get_unidades() << endl << violin1.get_ventas()
         << endl<<violin1.porcentaje_ventas()<<endl;

    //Se mandan a llamar los setters para comprobar funcionamiento
    violin1.set_madera("Abedul");
    violin1.set_marca("Stenor");
    violin1.set_cuerdas("Nylon");
    violin1.set_unidades(8);
    violin1.set_ventas(9);

    //Se vuelven a llamar los getters para revisar si las modificaciones se hicieron correctamente
    cout << "\nViolin 1: \n" << violin1.get_madera() <<endl << violin1.get_marca()
         << endl << violin1.get_cuerdas() << endl << violin1.get_unidades() << endl << violin1.get_ventas()
         << endl<<violin1.porcentaje_ventas()<<endl;


    return 0;

}
