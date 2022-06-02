//
// Created by diego on 31/05/2022.
//

#ifndef UNTITLED_PAQUETE_H
#define UNTITLED_PAQUETE_H

#include "guitarra.h"
#include "piano.h"
#include "violin.h"
#include "instrumento.h"


class Paquete {

private:

    //Se crea el arreglo de instrumentos, definiendo como apuntador para usar polimorfismo
    Instrumento* ins[50];
    int cantidad=0;

public:
    //constructor default del paquete
    Paquete(){};

    //Metodo para asignar el objeto al arreglo
    void asigna(Guitarra*);
    void asigna(Piano*);
    void asigna(Violin*);

    //Metodo para mostrar las caracteristicas del instrumento
    string mostrar_instrumentos();

    //Metodo para calular el precio del paquete
    string precio_final();

    //Metodo para el calcular el precio del paquete con cupon
    string precio_final(float cupon);
};

//Metodo de asignacion de guitarras
void Paquete::asigna(Guitarra *gui) {
    ins[cantidad] = gui;
    cantidad++;
}

//Metodo de asignacion de Pianos
void Paquete::asigna(Piano *pi) {
    ins[cantidad] = pi;
    cantidad++;
}

//Metodo de asignacion de Violines
void Paquete::asigna(Violin *vi) {
    ins[cantidad] = vi;
    cantidad++;
}


//Metodo para mostrar los instrumentos que hay en el paquete (polimorfismo)
string Paquete::mostrar_instrumentos() {
    stringstream aux;
    for(int i=0;i<cantidad;i++) {
        aux << "\n" << "Instrumento " << i+1 << ": " << ins[i]->mostrar_car();
    }
    return aux.str();
}

string Paquete::precio_final() {
    float total=0.0;
    stringstream aux;
    for(int i=0;i < cantidad;i++){
        total += ins[i]->get_precio();
    }
    aux << "El precio total del paquete es de: $" << total << endl;
    return aux.str();
}

string Paquete::precio_final(float cupon){
    stringstream aux;
    float total=0.0,final=0.0;

    for (int i = 0; i < cantidad; i++) {
        total += ins[i]->get_precio();
    }

    if(cupon<=20) {
        if (total > 250){
            final=total-(total*(cupon/100));
        }
        else{
            return "El cupon no es valido en esta compra, para usarse la compra debe tener un valor mayor de $250";
        }
    }
    else{
        return "El cupon no es valido, verifique e ingrese nuevamente";
    }
    aux << "El precio inicial del paquete fue: $" << total << "\nEl precio con descuento es: $"
        << final << "\nEl cliente ahorro: $" << total - final<<endl;
    return aux.str();
}


#endif //UNTITLED_PAQUETE_H
