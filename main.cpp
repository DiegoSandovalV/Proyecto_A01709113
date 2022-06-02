#include <iostream>
#include <string>
#include "instrumento.h"
#include "guitarra.h"
#include "piano.h"
#include "violin.h"
#include "paquete.h"

using namespace std;

void menu() {
    cout << "\nMenu: " << endl;
    cout << "1. Mostrar guitarras" << endl;
    cout << "2. Mostrar Pianos" << endl;
    cout << "3. Mostrar Violines" << endl;
    cout << "4. Mostrar paquete" <<endl;
    cout << "5. Precio final del paquete" << endl;
    cout << "6. Precio del paquete con cupon" << endl;
    cout << "0. Salir" << endl;

}

int main() {

    //defino los apuntadores objetos
    Guitarra* guitarra1;
    Guitarra* guitarra2;
    Guitarra* guitarra3;

    Piano* piano1;
    Piano* piano2;
    Piano* piano3;

    Violin* violin1;
    Violin* violin2;
    Violin* violin3;


    //Ejemplos de objetos clase Guitarra
    guitarra1=new Guitarra("Fender", "Stratocaster", 55, "Metal", "medium", 10, 1);
    guitarra2=new Guitarra("ibanies", "Classic", 99, "Metal", "medium", 10, 1);
    guitarra3=new Guitarra("yamaha", "Acustica", 88, "Metal", "medium", 10, 1);



    //Ejemplos de objetos clase Piano

    piano1=new Piano("Yamaha", "Grand", 99.4, "Sin sintetizador", 88, 13, 2);
    piano2=new Piano("Nux", "Privia", 158.9, "Modular", 60, 10, 0);
    piano3=new Piano("Casio", "Clasico", 69.99, "Modular despegable", 63, 5, 1);

    //Ejemplos de objetos clase Violin
    violin1= new Violin("Yamaha", "Artida", 88, "Nylon", "No incluido", 8, 8);
    violin2= new Violin("Primavera", "Divarius", 99.99, "Metal", "Cuero", 10, 1);
    violin3= new Violin("Gewa", "Allegro", 199.99, "Hibridas", "Plastico", 5, 2);


    //Se crea el paquete ejemplo de guitarras
    Paquete paquete1;


    //Se le asignan las guitarras al paquete

    paquete1.asigna(guitarra1);
    paquete1.asigna(guitarra2);
    paquete1.asigna(guitarra3);


    //Se le asignan los Pianos al paquete
    paquete1.asigna(piano1);
    paquete1.asigna(piano2);
    paquete1.asigna(piano3);


    //Se le asignan los Violines al paquete
    paquete1.asigna(violin1);
    paquete1.asigna(violin2);
    paquete1.asigna(violin3);

    //Variable de la opcion del menu
    int op = 1;

    //Variable para el valor del cupon
    int cupon;

    //Ciclo para que el menu no se cierre hasta que el usuario eliga salir
    while (op < 9 && op > 0) {
        menu();

        //Se lee la opcion
        cin >> op;


        //Switch donde el usuario puede elegir la opcion

        switch (op) {

            //Se muestran las guitarras actuales
            case 1:
                cout << guitarra1->mostrar_car() << guitarra2->mostrar_car() << guitarra3->mostrar_car();
                break;

                //Se muestran los Pianos actuales
            case 2:
                cout << piano1->mostrar_car() << piano2->mostrar_car() << piano3->mostrar_car();
                break;

                //Se muestran los Violines actuales
            case 3:
                cout << violin1->mostrar_car() << violin2->mostrar_car() << violin3->mostrar_car();
                break;

                //Se muestran los isntrumentos del paquete
            case 4:
                cout<<paquete1.mostrar_instrumentos();
                break;

                //Se Muestra el precio total del paquete
            case 5:
                cout<<paquete1.precio_final();
                break;

            case 6:
                cout<< "Ingrese cupon: " << endl;
                cin>>cupon;
                cout<<paquete1.precio_final(cupon);
                break;
        }

    }

    return 0;

}
