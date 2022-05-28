#ifndef PAQUETE_H
#define PAQUETE_H

#include "guitarra.h"
#include "piano.h"
#include "violin.h"

class Paquete{

private:
    //Se crean los arreglos donde se van a guardar los objetos
    Guitarra guitarras[50];
    int cant_guitarras = 0;

    Piano pianos[50];
    int cant_pianos = 0;

    Violin violines[50];
    int cant_violines = 0;

public:
    //constructor default del paquete
    Paquete(){};

    //Metodo para asignar el objeto al arreglo
    void asigna(Guitarra);
    void asigna(Piano);
    void asigna(Violin);


    //Metodo para mostrar los objetos de los arreglos
    string mostrar_guitarras();
    string mostrar_pianos();
    string mostrar_violines();



    //Metodo para calcular el precio final del paquete
    string precio_total_guitarras();
    string precio_total_pianos();
    string precio_total_violines();

    //Metodo para calcular el precio final del paquete si se cuenta con un cupon
    string precio_total_guitarras(float cupon);
    string precio_total_pianos(float cupon);
    string precio_total_violines(float cupon);

};


//Metodo de asignacion de guitarras
void Paquete::asigna(Guitarra gui) {
    guitarras[cant_guitarras] = gui;
    cant_guitarras+=1;
}

//Metodo de asignacion de Pianos
void Paquete::asigna(Piano pi) {
    pianos[cant_pianos] = pi;
    cant_pianos+=1;
}

//Metodo de asignacion de Violines
void Paquete::asigna(Violin vi) {
    violines[cant_violines] = vi;
    cant_violines+=1;
}


//Metodo para mostrar las guitarras que hay en el paquete
string Paquete::mostrar_guitarras() {
    stringstream aux;
    for(int i = 0 ; i < cant_guitarras; i++){
        aux << "Guitarra " << i <<":  "<< guitarras[i].mostrar_car() << endl;
    }
    return aux.str();
}

//Metodo para mostrar los Pianos que hay en el paquete
string Paquete::mostrar_pianos() {
    stringstream aux;
    for(int i = 0 ; i < cant_pianos; i++){
        aux << "Piano " << i <<":  "<< pianos[i].mostrar_car() << endl;
    }
    return aux.str();
}

//Metodo para mostrar las guitarras que hay en el paquete
string Paquete::mostrar_violines() {
    stringstream aux;
    for(int i = 0 ; i < cant_violines; i++){
        aux << "Violin " << i <<":  "<< violines[i].mostrar_car() << endl;
    }
    return aux.str();
}

//Metodo para calcular el precio final del paquete de las guitarras
string Paquete::precio_total_guitarras() {
    float total;
    total = 0.0;
    stringstream aux;

    for (int i = 0; i < cant_guitarras; i++) {
        total += guitarras[i].get_precio();
    }

    aux << "El precio total del paquete es de: $" << total << endl;
    return aux.str();
}

//Metodo para calcular el precio final del paquete de pianos
string Paquete::precio_total_pianos() {
    float total;
    total = 0.0;
    stringstream aux;

    for (int i = 0; i < cant_pianos; i++) {
        total += pianos[i].get_precio();
    }

    aux << "El precio total del paquete es de: $" << total << endl;
    return aux.str();
}



//Metodo para calcular el precio final del paquete de violines
string Paquete::precio_total_violines() {
    float total;
    total = 0.0;
    stringstream aux;

    for (int i = 0; i < cant_violines; i++) {
        total += violines[i].get_precio();
    }

    aux << "El precio total del paquete es de: $" << total << endl;
    return aux.str();
}

string Paquete::precio_total_guitarras(float cupon) {
    stringstream aux;
    float total, final;
    total = 0.0;
    final = 0.0;

    for (int i = 0; i < cant_guitarras; i++) {
        total += guitarras[i].get_precio();
    }
    if(cupon<20) {
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

string Paquete::precio_total_pianos(float cupon) {
    stringstream aux;
    float total, final;
    total = 0.0;
    final = 0.0;

    for (int i = 0; i < cant_pianos; i++) {
        total += pianos[i].get_precio();
    }
    if(cupon<20) {
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

string Paquete::precio_total_violines(float cupon) {
    stringstream aux;
    float total, final;
    total = 0.0;
    final = 0.0;

    for (int i = 0; i < cant_violines; i++) {
        total += violines[i].get_precio();
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
#endif
