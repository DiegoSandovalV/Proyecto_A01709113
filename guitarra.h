/*
 * Proyecto A01709113
 * Sandoval Vargas Diego Ernesto
 * A01709113
 * 14/06/2022
 */


/*Clase Guitarra
* Contiene las variables que diferencian esta subclase de las demas, al combinar estas con las varriables de la clase padre (instrumento)
 * se obtiene un objeto de tipo Guitarra
*/

#ifndef GUITARRA_H
#define GUITARRA_H
#include "instrumento.h"
using namespace std;

class Guitarra : public Instrumento{

private:
    string cuerdas;
    string trastes;

public:

    //Constructor default
    Guitarra():Instrumento(){
        cuerdas = "";
        trastes = "";
    }

    //Constructor
    Guitarra(string mar, string mod, float pre,string cuer, string tras, int uni, int ven):Instrumento(mar, mod, pre,uni, ven) {
        cuerdas = cuer;
        trastes = tras;
    }


    //Metodos

    //getters
    string get_cuerdas();
    string get_trastes();


    //setters

    void set_cuerdas(string);
    void set_trastes(string);

    //Metodo para mostrar las caracteristicas del objeto

    string mostrar_car(){
        stringstream aux;
        aux << marca << " " << modelo << " " << cuerdas << " " << trastes << "\n" << porcentaje_ventas() << endl;
        return aux.str();
    }


};


//Getters

string Guitarra::get_cuerdas() {
    return cuerdas;
}

string Guitarra::get_trastes() {
    return trastes;
}


//Setters



void Guitarra::set_cuerdas(string cuer) {
    cuerdas = cuer;
}

void Guitarra::set_trastes(string tras) {
    trastes = tras;
}


#endif
