/*
 * Proyecto A01709113
 * Sandoval Vargas Diego Ernesto
 * A01709113
 * 18/11/2021
 */


/*Clase Violin
 * Contiene las variables que diferencian esta subclase de las demas, al combinar estas con las varriables de la clase padre (instrumento)
 * se obtiene un objeto de tipo Violin
*/
#include "instrumento.h"
using namespace std;

class Violin : public Instrumento{

private:

    string cuerdas;
    string barbada;

public:

    //Constructor default
    Violin():Instrumento(){
    cuerdas = "";
    barbada = "";
    }

    //Constructor
    Violin(string mar, string mod, float pre,string cuer, string bar, int uni, int ven):Instrumento(mar, mod, pre,
                                                                                                     uni, ven) {
        cuerdas = cuer;
        barbada = bar;
    }


    //Metodos

    //getters
    string get_cuerdas();
    string get_barbada();


    //setters

    void set_cuerdas(string);
    void set_barbada(string);


};


//Getters

string Violin::get_cuerdas() {
    return cuerdas;
}

string Violin::get_barbada() {
    return barbada;
}


//Setters



void Violin::set_cuerdas(string cuer) {
    cuerdas = cuer;
}

void Violin::set_barbada(string bar) {
    barbada = bar;
}

