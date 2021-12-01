#ifndef PAQUETE_GUITARRAS_H
#define PAQUETE_GUITARRAS_H

#include "guitarra.h"

class Paquete_Guitarras{

private:
    //Se crea el arreglo donde se van a guardar los objetos
    Guitarra guitarras[3];
    int cant_actual = 0;


public:
    //constructor default
    Paquete_Guitarras(){};

    //Metodo para asignar el objeto tipo Guitarra
    void asigna_guitarra(Guitarra,int );

    //Metodo para mostrar las guitarras que hay en el paquete
    string mostrar_guitarras();

    //Metodo para calcular el precio final del producto con el descuento
    string precio_total();

};


//Metodo de asignacion
void Paquete_Guitarras::asigna_guitarra(Guitarra gui, int num) { //num se refiere al numero de guitarra que se esta agregando
    guitarras[num] = gui;
    cant_actual+=1;
}

//Metodo para mostrar las guitarras que hay en el paquete
string Paquete_Guitarras::mostrar_guitarras() {

    stringstream aux;
    for(int i = 0 ; i < 3; i++){
            aux << "Guitarra " << i <<":  "<<" "<< guitarras[i].mostrar() << endl;
    }
    return aux.str();
}



//Metodo para calcular el precio final del producto con el descuento
string Paquete_Guitarras::precio_total() {
    float total, final;
    total = 0.0;
    final = 0.0;
    stringstream aux;

    for (int i = 0; i < cant_actual; i++) {
        total += guitarras[i].get_precio();
    }

    if (cant_actual <= 5) {
        final = total * (1 - (0.05 * cant_actual));
    } else {
        final = total * .6;
    }
    aux << "El precio inicial del paquete fue: $" << total << "\nEl precio con descuento es: $"
        << final << "\nEl cliente Ahorro: $" << total - final;
    return aux.str();

}



#endif
