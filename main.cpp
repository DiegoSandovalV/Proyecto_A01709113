#include <iostream>
#include <string>
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
    cout << "4. Mostrar paquete Guitarras" << endl;
    cout << "5. Mostrar paquete Pianos" << endl;
    cout << "6. Mostrar paquete Violines" << endl;
    cout << "7. Precio final del paquete de Guitarras" << endl;
    cout << "8. Precio final del paquete de Pianos" << endl;
    cout << "9. Precio final del paquete de Violines" << endl;
    cout << "10. Precio del paquete de Guitarras con cupon" << endl;
    cout << "11. Precio del paquete de Pianos con cupon" << endl;
    cout << "12. Precio del paquete de Violines con cupon" << endl;
    cout << "0. Salir" << endl;

}

int main() {

    //Ejemplos de objetos clase Guitarra
    Guitarra guitarra1("Fender", "Stratocaster", 55, "Metal", "medium", 10, 1);
    Guitarra guitarra2("ibanies", "Classic", 99, "Metal", "medium", 10, 1);
    Guitarra guitarra3("yamaha", "Acustica", 88, "Metal", "medium", 10, 1);

    //Ejemplos de objetos clase Piano
    Piano piano1("Yamaha", "Grand", 99.4, "Sin sintetizador", 88, 13, 2);
    Piano piano2("Nux", "Privia", 158.9, "Modular", 60, 10, 0);
    Piano piano3("Casio", "Clasico", 69.99, "Modular despegable", 63, 5, 1);

    //Ejemplos de objetos clase Violin
    Violin violin1("Yamaha", "Artida", 88, "Nylon", "No incluido", 8, 8);
    Violin violin2("Primavera", "Divarius", 99.99, "Metal", "Cuero", 10, 1);
    Violin violin3("Gewa", "Allegro", 199.99, "Hibridas", "Plastico", 5, 2);


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
                cout << guitarra1.mostrar_car() << guitarra2.mostrar_car() << guitarra3.mostrar_car();
                break;

                //Se muestran los Pianos actuales
            case 2:
                cout << piano1.mostrar_car() << piano2.mostrar_car() << piano3.mostrar_car();
                break;

                //Se muestran los Violines actuales
            case 3:
                cout << violin1.mostrar_car() << violin2.mostrar_car() << violin3.mostrar_car();
                break;

                //Se muestran las guitarras del paquete
            case 4:
                cout << paquete1.mostrar_guitarras();
                break;

                //Se muestrab los Pianos del paquete
            case 5:
                cout << paquete1.mostrar_pianos();
                break;

                //Se muestran los Violines del paquete
            case 6:
                cout << paquete1.mostrar_violines();
                break;

                //Se Muestra el precio con descuento de el paquete de Guitarras
            case 7:
                cout<<paquete1.precio_total_guitarras();
                break;

                //Se Muestra el precio con descuento de el paquete de Pianos
            case 8:
                cout<<paquete1.precio_total_pianos();
                break;

                //Se Muestra el precio con descuento de el paquete de Violines
            case 9:
                cout<<paquete1.precio_total_violines();
                break;

            case 10:
                cout<< "Ingrese cupon: " << endl;
                cin>>cupon;
                cout<<paquete1.precio_total_guitarras(cupon);
                break;

            case 11:
                cout<< "Ingrese cupon: " << endl;
                cin>>cupon;
                cout<<paquete1.precio_total_pianos(cupon);
                break;

            case 12:
                cout<< "Ingrese cupon: " << endl;
                cin>>cupon;
                cout<<paquete1.precio_total_violines(cupon);
                break;
        }

    }


    return 0;

}
